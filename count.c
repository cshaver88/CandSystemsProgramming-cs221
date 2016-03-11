/* File:  	count.c
 *
 * Purpose:	Returns the number of times c appears in s.
 *
 * Input:	array of characters and a character c to search for.
 * Output:	The number of times c appears in s.
 * 
 *
 */

  #include <stdio.h>
  #include <string.h>

 int i = 0;
 int x = 0;

//int count(char s[], char c);

// int main(void){
// 	char email[] = "dai.yo.hhh@gmail.com"; 
// 	printf("%d \n", count(email,'.'));

// 	return 0;
// } /* main */

 /*-------------------------------------------------------------------*/
int count(char s[], char c) {
	

	if (s[i] == c){
		x ++;
	}
	if(i > strlen(s)){
		return x;
	}
	i ++;
	count(s, c);

	return x;
	
} /* count */