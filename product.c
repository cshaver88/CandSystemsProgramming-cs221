/*
 * Author:	Cayla Shaver
 *
 * File:	product.c
 * 
 * Compile:	gcc -std=c99 product.c -o p
 * Run:		./p
 *
 * Purpose:	Use pointer arithmetic to visit all array elements
 *			and multiply each element in a with each element in b
 * 			then add each of those products together.
 *
 * Input:	a = pointer to array
 *			b = pointer to array
 *			n = size of each array
 *	
 * Output:	Sum of products for each element in a and b.
 *
 *
 *
 *
 */

#include <stdio.h>
// #include <math.h>

double inner_product(double *a, double *b, int n);

/*----------------------------------------------------------*/
int main(void){

	double v[] = {2.3, 6.0, 1.2, 0.7, 9.4, 5.1, 0.2, 4.4, 2.3, 0.01}; 
	printf("%f \n", inner_product(v,v,10));
	printf("Expected: 182.280100\n");

} /* main */

//pointer arithmetic  *a++ or *a+1
/*----------------------------------------------------------*/
double inner_product(double *a, double *b, int n){
	//a[0] * b[0] + a[1] * b[1] + .... + a[n-1] * b[n-1]

	double product;

	// for (int i = 0; i < n; i++){
		//*(a+i) will do 0, 1, 2, 3.....n
		// product += *(a+i) * *(b+i);
	// }
	if(n == 0){
		return 0;
	}

	while (n != 0){
		product = *(a++) * *(b++);
		return product += inner_product(a, b, n - 1);
		printf("%f\n", product);
	}

	

	return product;
} /* inner_product */









