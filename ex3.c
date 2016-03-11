#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun3(int* a)
{
//a points to x[2]
*a=8;
*(a-1)=9;
 a[1]++;
}
int main()
{
  char *c;
  for(;;)
    {
      c = (char*) malloc(sizeof(char));
      free(c);
    }
return 0;
}