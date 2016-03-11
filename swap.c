// #include<stdio.h>
// void swap(char* s)
// {
//   char temp;
//   temp=s[0];
//   s[0]=s[1];
//   s[1]=temp;
// }
// int main() {
//   char amessage[] = "now is the time";
//   char *bmessage = "now is the time";

//   // swap("now is the time");

//   // swap(amessage);

// 	swap(bmessage);  

// }








// // 

// // 





#include<stdio.h>

char* cat2str (char* s1, char* s2)
{
  char* p= s1;
  while (*p != '\0')
    p++;
  while (*s2 != '\0')
    *p++=*s2++;
  *p='\0';
  return s1;

}
int main()
{
  char amessage[]="Hello";

  printf("%s\n",cat2str(amessage," to go"));

  // printf("%s\n",amessage);

  return 0;
}













