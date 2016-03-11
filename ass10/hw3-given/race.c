/* race.c - a simple pthreads program */

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

long long gx = 0;
long long count = 999999;
pthread_mutex_t gmutex = PTHREAD_MUTEX_INITIALIZER;

void *thread_func(void *arg)
{
        long long i;
        
        for (i = 0; i < count; i++) {
            pthread_mutex_lock(&gmutex);
            gx += 1;
            pthread_mutex_unlock(&gmutex);
        }
        
        return (void *) 0;
}

int main(int argc, char *argv[])
{
        pthread_t t1, t2;
        int rv1, rv2;

        printf("Starting race\n");
        
        if (pthread_create(&t1, NULL, thread_func, (void *) 1) != 0) {
                printf("pthello: pthread_create error\n");
                exit(1);
        }
        if (pthread_create(&t2, NULL, thread_func, (void *) 2) != 0) {
                printf("pthello: pthread_create error\n");
                exit(1);
        }

        pthread_join(t1, (void **) &rv1);
        pthread_join(t2, (void **) &rv2);

        printf ("Expected value = %lld\n", count * 2);
        printf ("Actual value   = %lld\n", gx);

        return 0;
}
