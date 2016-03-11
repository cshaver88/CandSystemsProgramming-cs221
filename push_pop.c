#include"header.h"
void push(int i)
{
  if(is_full()) 
    printf("stack overflow");
  else
    contents[top++]=i;
}
int pop(void)
{
  if(is_empty())
    return -1; //-1 means stack empty
  else
    return contents[--top];
}
