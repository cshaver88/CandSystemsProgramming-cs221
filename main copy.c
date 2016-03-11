#include "header.h"
/* external variables */
int contents[STACK_SIZE];
int top = 0;
int main()
{
  int i; //local variable
  push(10); push(20);push(30);
  printf("%d\n",pop());
  for (i=0; i< top; i++)
    printf("%d, ",contents[i]);
  printf("\n");
}
