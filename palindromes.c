#include <stdio.h>
#include <string.h>
int testPalindrome(const char a[], int start, int end)
{
  char b[strlen(a)];
  // strcpy(b, a);
  // printf("Word: %s\n", b);
  // for (int i = 0; i < strlen(a); i ++){
  //   if (a[i] == ' '){
  //     continue;
  //   }
  //   else{
  //     strcat(b, &a[i]);
  //     printf("Word: %s\n", b);
  //   }
  // }
  if(start >= end){
    return 0;
  }
  if(strcmp(&b[start], &b[end]) == 0){
    testPalindrome(b, start++, end--);
    return 1;
  }
}
int main()
{
  char a[]="radar";
  if (testPalindrome(a, 0, strlen(a) - 1))
    printf("%s is a palindrome.\n",a);
  else
    printf("%s is not a palindrome.\n",a);

  char b[]="hello";
  if (testPalindrome(b, 0, strlen(b) - 1))
    printf("%s is a palindrome.\n",b);
  else
    printf("%s is not a palindrome.\n",b);

  char c[]="a man a plan a canal panama";
  if (testPalindrome(c, 0, strlen(c) - 1))
    printf("%s is a palindrome.\n",c);
  else
    printf("%s is not a palindrome.\n",c);

  char d[]="a mana plan";
  if (testPalindrome(d, 0, strlen(d) - 1))
    printf("%s is a palindrome.\n",d);
  else
    printf("%s is not a palindrome,\n",d);

}