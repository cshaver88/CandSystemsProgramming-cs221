/* File:  	min.c
 *
 * Purpose:	return the smallest number in a given set of numbers
 * 			between two indices
 *
 * Input:	String of text with or without () {} [] <>
 * Output:	Whether the given input is balanced or not
 * 
 *
 */

  #include <stdio.h>

 /*-------------------------------------------------------------------*/
int min(int a[], int start, int end) {
	int myMin;

	if(start == end){
		return a[start];
	}

	myMin = min(a, start + 1, end);

	if (myMin > a[start]){
		return a[start];
	}
	else{
		return myMin;
	}


	
} /* min */
// int main(void){
// 	int a[] = {9, 2, 6, 7, 5, 4, 2, 7, 5};
// 	printf("%d\n", min(a, 2, 8));
// }