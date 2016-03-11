/* findchar.c - find the number of occurances of a character in a string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

int findchar(char *s, char c)
{
    int count = 0;
    
    while (*s != '\0') {
        if (*s == c) {
            count++;
        }
        s = s + 1;
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

int main(int argc, char *argv[])
{
    char *filename;
    char ch;
    int ch_count;
    int filesize;
    char *buffer;
    
    if (argc != 3) {
        printf("usage: findchar <filename> <char>\n");
        exit(1);
    }

    filename = argv[1];
    ch = argv[2][0];

    filesize = findsize(filename);
    buffer = (char *) malloc(filesize + 1);
    assert(buffer != NULL);

    readfile(filename, buffer);

    printf("filesize %s = %d\n", filename, findsize(filename));
    /* printf("Contents:\n"); */
    /* printf("%s", buffer); */

    ch_count = findchar(buffer, ch);
    
    printf("Number of '%c' occurences = %d\n", ch, ch_count);
    
    return 0;
}