/*
 * Author:	Cayla Shaver
 *
 * File:	string.c
 * 
 * Compile:	gcc -std=c99 string.c -o s
 * Run:		./s
 *
 * Purpose:	Use pointers to manipulate character arrays and 
 * 			modify the output.
 *
 * Input:	char [] = array to pass into the modification methods.
 *	
 * Output:	Local pointer variable as the return value.
 *
 *
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* twice(const char* s);
char* reverse(const char* s);
char* drop(const char* s, char c);


/*----------------------------------------------------------*/
int main(void){

    
	char s[] = "quick"; 
	char* resultS = twice(s);
	printf("%s\n", resultS);

	free(resultS);
	
	char u[] = "jumps over"; 
	char* resultU = reverse(u);
	printf("%s\n", resultU); 

	free(resultU);
	
	char v[] = "lazy dog";
	char* resultV = drop(v, 'o'); 
	printf("%s\n", resultV);

	free(resultV);

} /* main */


/*----------------------------------------------------------*/
// this function returns a string that contains two copies 
// of the input string
char* twice(const char* s){
	char* result;

	result = (char*) malloc(sizeof(char) * strlen(s)); 


	strcpy(result, s);
	strcat(result, s);

	if(result == NULL){
		return NULL;
	}
	else {
		return result;
	}
} /* twice */


/*----------------------------------------------------------*/
// this function returns the reverse of the input string
char* reverse(const char* s){

	char* result;
	const int size = strlen(s);
	int i, j;

	result = (char*) malloc(sizeof(char) * size + 1);

	for (i = 0, j = size - 1; i < size; i ++, j --){
		result[i] = s[j];
	}
	return result;
} /* reverse */


/*----------------------------------------------------------*/
// this function returns the input string with all
// occurrence of character c removed from the string
char* drop(const char* s, char c){

	char *result;
	const int size = strlen(s);
	int i;
	int j;

	result = (char*) malloc(sizeof(char) * size - 1);

	for (i = j = 0; s[i] != '\0'; i ++){
		if(s[i] != c){
			result[j++] = s[i];
		}
	}
	result[j] = '\0';

	return result;
} /* drop */








