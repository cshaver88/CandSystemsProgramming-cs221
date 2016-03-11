/* File:     findminmax_busy.c
 * Compile:  gcc -g -Wall -o fmm findminmax_busy.c -lm -lpthread
 * Run:      ./fmm <number of threads> <n>
 *           n is the number of items to look through
 *           n doesn't have to be divisible by the number of threads
 */        
/* File:  this is the random part     
 *     pth_mat_vect_rand.c 
 *
 * Purpose:  
 *     Computes a parallel matrix-vector product.  Matrix
 *     is logically distributed by block rows.  Vectors are logically
 *     distributed by blocks.  This version uses a random number 
 *     generator to generate A and x.
 *
 * Input:
 *     none
 *
 * Output:
 *     y: the product vector
 *     Elapsed time for the computation
 *
 * Compile:  
 *    gcc -g -Wall -o pth_mat_vect_rand pth_mat_vect_rand.c -lpthread
 * Usage:
 *    ./pth_mat_vect_rand <thread_count> <m> <n>
 *
 * Notes:  
 *     1.  Local storage for A, x, y is dynamically allocated.
 *     2.  Number of threads (thread_count) should evenly divide
 *         m.  The program doesn't check for this.
 *     3.  We use a 1-dimensional array for A and compute subscripts
 *         using the formula A[i][j] = A[i*n + j]
 *     4.  Distribution of A, x, and y is logical:  all three are 
 *         globally shared.
 *     5.  Compile with -DDEBUG for information on generated data
 *         and product.
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "timer.h"

int     thread_count;
int     n;
double min = 1;
double max = 0;
int flag = 0;
double* x;

void Usage(char* prog_name);
void Gen_vector(double x[], int n);
void Read_vector(char* prompt, double x[], int n);
void Print_vector(char* title, double y[], double m);
void *Findminmax_busy(void* rank);

int main(int argc, char* argv[]) {
  long       thread;
  pthread_t* thread_handles;
  double start, finish;

  if (argc != 3) Usage(argv[0]);
  thread_count = strtol(argv[1], NULL, 10);
  n = strtol(argv[2], NULL, 10);

  printf("thread_count =  %d, n = %d\n", thread_count, n);

  thread_handles = malloc(thread_count*sizeof(pthread_t));
  x = malloc(n*sizeof(double));
   
  srandom(1);
  Gen_vector(x, n);
  Print_vector("We generated", x, n); 


  GET_TIME(start);
  for (thread = 0; thread < thread_count; thread++)
    pthread_create(&thread_handles[thread], NULL,
         Findminmax_busy, (void*) thread);

  for (thread = 0; thread < thread_count; thread++)
    pthread_join(thread_handles[thread], NULL);
  GET_TIME(finish);
    printf("Elapsed time: %d\n", start-finish);

 printf("MIN: %lf, MAX: %lf\n", min, max);

  free(x);
  free(thread_handles);

  return 0;
} 

void Usage (char* prog_name) {
  fprintf(stderr, "usage: %s <thread_count> <m> <n>\n", prog_name);
  exit(0);
}  

void Gen_vector(double x[], int n) {
  int i;
  for (i = 0; i < n; i++)
    x[i] = random()/((double) RAND_MAX);
} 

void Read_vector(char* prompt, double x[], int n) {
  int   i;

  printf("%s\n", prompt);
  for (i = 0; i < n; i++) 
    scanf("%lf", &x[i]);
}

void *Findminmax_busy(void* rank) {
  long my_rank = (long) rank;
  int i;
  int local_n = n/thread_count; 
  int my_first_row = my_rank*local_n;
  int my_last_row = (my_rank+1)*local_n - 1;
  double local_min = 1;
  double local_max = 0;

   if(n % thread_count != 0 && my_rank == thread_count - 1)
      my_last_row = n-1;
   printf("Thread %ld > my_first_row = %d, my_last_row = %d\n",
         my_rank, my_first_row, my_last_row);

  for(i = my_first_row; i <= my_last_row; i ++){
      if(x[i] < local_min){
         local_min = x[i];
      }
      if(x[i] > local_max){
         local_max = x[i];
      }
  }

  while(flag != my_rank);
  if(local_min < min){
   min = local_min;
  }
   if(local_max > max){
   max = local_max;
  }
  flag = (flag + 1) % thread_count;

  return NULL;
}

void Print_vector(char* title, double y[], double m) {
  int   i;

  printf("%s\n", title);
  for (i = 0; i < m; i++)
    printf("%6.3f ", y[i]);
  printf("\n");
} 































