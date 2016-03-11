/* findchar.c - find the number of occurances of a character in a string */

#include <stdio.h>
#include <string.h>
#include <assert.h>

int findchar(char *s, char c)
{
    int count = 0;
    int len;
    int i;
    
    len = strlen(s);

    for (i = 0; i < len; i++) {
        if (s[i] == c) {
            count++;
        }
    } 

    return count;
}


int main(void)
{
    char *s = "This is a test of our new findchar function\n";
    
    printf("Number of 'i's: %d\n", findchar(s, 'i'));
    
    return 0;
}