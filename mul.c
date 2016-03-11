/* File:  	mul.c
 *
 * Purpose:	Compute the product of two numbers without *
 *
 * Input:	
 * Output:	
 * 
 *
 */

  #include <stdio.h>
 	int product = 0;

//  	int mul(int a, int b);

//  int main(void){

//  		printf("%d \n", mul(2, 8));
// 	printf("Expected Output is: 16\n");
// 	printf("%d \n", mul(-2, 8));
// 	printf("Expected Output is: -16\n");
// 	printf("%d \n", mul(2, -8));
// 	printf("Expected Output is: -16\n");
// 	printf("%d \n", mul(-2, -8));
// 	printf("Expected Output is: 16\n");
// }

 /*-------------------------------------------------------------------*/
int mul(int a, int b) {


	if (b == 0 || a == 0){
		return 0;
	}
	else if(b < 0){
		return (- a + mul(a, b + 1));
	}
	else{
		return (a + mul(a, b - 1));
	}

} /* mul */