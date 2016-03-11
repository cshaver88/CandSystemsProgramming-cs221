/* squeeze: delete all c from s */ 
#include <stdio.h>
#include <string.h>

void squeeze(char s[], char c)
{
	int i = 0;
	char temp[15];
	int j = 0;

	while(i < strlen(s) - 1){
		if (s[i] == c){
			i ++;
		}
		else{
			temp[j] = s[i];
			j ++;
		}
	}


}
int main(void)
{
  char s[]="A man, a plan, a canal - Panama";
  char c='a';
  printf("before delete: %s\n",s);
  squeeze(s,c);
  printf("after delete: %s\n",s);
}