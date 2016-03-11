#include <stdio.h>
#define max(A,B) A > B ? A :B
int main()
{
  printf("%d\n",max(12, 6));
  printf("%c\n",max('a', 'b'));
  printf("%s\n",max("abc", "def"));

}
