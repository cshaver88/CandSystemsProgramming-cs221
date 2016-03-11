/* File:  	main.c
 *
 * Purpose:	Print the numbers from 1...n in ascending order
 *
 * Input:	number to count to 
 * Output:	the numbers from 1 to n
 *
 */

 #include <stdio.h>
 #include <string.h>

//STACK_SIZE = 50;
// int contents[STACK_SIZE];
//int top = 0;
// int i = 0;  //not sure if this goes here
void ascending(int n);
int mul(int a, int b);
int min(int a[], int start, int end);
int count(char s[], char c);

 /*-------------------------------------------------------------------*/
int main(void) {

	ascending(10);
	printf("\n");
	printf("Expected Output is : 12345678910\n");
	int a[] = {9, 2, 6, 7, 5, 4, 0, 2, 7, 5};
	printf("%d \n", min(a, 2, 8));
	printf("Expected Output is: 0\n");
	printf("%d \n", mul(2, 8));
	printf("Expected Output is: 16\n");
	printf("%d \n", mul(-2, 8));
	printf("Expected Output is: -16\n");
	printf("%d \n", mul(2, -8));
	printf("Expected Output is: -16\n");
	printf("%d \n", mul(-2, -8));
	printf("Expected Output is: 16\n");
	char email[] = "dai.yo.hhh@gmail.com";
	printf("%d \n", count (email, '.'));
	printf("Expected Output is: 3\n");
	
	return 0;
} /* main */