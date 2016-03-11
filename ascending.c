/* File:  	ascending.c
 *
 * Purpose:	Print the numbers from 1...n in ascending order
 *
 * Input:	number to count to 
 * Output:	the numbers from 1 to n
 *
 */

 #include <stdio.h>
//  void ascending(int n);

//  int main(void) {

// 	ascending(10);
// 	printf("\n");
// 	printf("Expected Output is : 12345678910\n");
// 	// int a[] = {9, 2, 6, 7, 5, 4, 0, 2, 7, 5};
// }

 /*-------------------------------------------------------------------*/
void ascending(int n) {

	if(n == 1){
		printf("%d", n);
	}
	else{
		ascending(n - 1);
		printf("%d", n);
	}

} /* ascending */