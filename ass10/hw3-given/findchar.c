/* findchar.c - find the number of occurances of a character in a string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <pthread.h>
#include <assert.h>

/* global variables */

int ch_count = 0;
char ch;
int filesize;
char *buffer;
int nthreads = 0;

int findchar(char *s, int offset, int len, char c)
{
    int count = 0;
    int i;
    
    for (i = offset; i < offset + len; i ++) {
        if (s[i] == c) {
            count++;
        }
    }

    return count;
}

int findsize(char *filename)
{
    int fd;
    int count = 0;
    char buf[1];
    
    fd = open(filename, O_RDONLY);
    assert(fd > 0);
    while(read(fd, buf, 1)) {
        count++;
    }
    close(fd);
    return count;
}

void readfile(char *filename, char *buf)
{
    int fd;

    fd = open(filename, O_RDONLY);
    assert(fd > 0);
    while(read(fd, buf, 1)) {
        buf += 1;
    }
    *buf = '\0';
    close(fd);
}


void *find_thread(void *arg)
{
    int count = 0;
    int index = (int) arg;
    int chunksize = 0;
    int offset = 0;

    /* compute count for substring */
    chunksize = filesize / nthreads;
    offset = index * chunksize;

    count = findchar(buffer, offset, chunksize, ch);

    /* update global ch_count value */
    
    ch_count += count;
    
}

int main(int argc, char *argv[])
{
    char *filename;
    int half;
    pthread_t *pt_array;
    int *rv_array;
    int i;
    int rv;
    
    if (argc != 4) {
        printf("usage: findchar <filename> <char> <nthreads>\n");
        exit(1);
    }

    filename = argv[1];
    ch = argv[2][0];
    nthreads = atoi(argv[3]);

    pt_array = (pthread_t *) malloc(sizeof(pthread_t) * nthreads);
    rv_array = (int *) malloc(sizeof(int) * nthreads);

    filesize = findsize(filename);
    half = filesize / 2;

    buffer = (char *) malloc(filesize + 1);
    assert(buffer != NULL);

    readfile(filename, buffer);

    printf("filesize %s = %d\n", filename, findsize(filename));

    /* computation */

    for (i = 0; i < nthreads; i++) {
        rv = pthread_create(&pt_array[i], NULL, find_thread, (void *) i);
        assert(rv == 0);
    }

    for (i = 0; i < nthreads; i++) {
        pthread_join(pt_array[i], (void **) &rv_array[i]);
    }
    
    printf("Number of '%c' occurences = %d\n", ch, ch_count);
    
    return 0;
}