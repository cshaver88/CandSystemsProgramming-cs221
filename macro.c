/* File:  	macro.c
 *
 * Purpose:	Returns the number of times c appears in s.
 *
 * Input:	array of characters and a character c to search for.
 * Output:	The number of times c appears in s.
 * 
 * Discussion:	The defined macro seems to move much faster 
 *				than the c method does. I think this is because 
 *				the information that the preprocessor needs 
 *				is readily available for the compiler at compile 
 *				time. There is no need to follow pointers like 
 *				in the c method.
 *
 */

 #include <stdio.h>
 #include <limits.h>
 #include <stdlib.h>

 #define swap_m(t, x, y)  {t temp = x;  x = y; y = temp;} //interchange x and y that are type t

 void swap_f(int *x, int *y);

/*-------------------------------------------------------------------*/
int main(void) {

	int x = 100;
	int y = 50;

	int a = 100;
	int b = 50;

	int c = 100;
	int d = 50;

	int v = 100;
	int w = 50;

	swap_m(int, x, y);
	printf("M: x = %d  y = %d\n", x, y);

	swap_f(&a, &b);
	printf("F: a = %d  b = %d\n", a, b);

	system("date");
	for (int i = 0; i < INT_MAX; i ++){
		swap_m(int, c, d);
	}
	system("date");

	system("date");
	for (int j = 0; j < INT_MAX; j ++){
		swap_f(&v, &w);
	}
	system("date");

	
	return 0;
	
} /* main */


/*-------------------------------------------------------------------*/
void swap_f(int *x, int *y) {
	// printf("x = %d y = %d\n", x, y);
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
	
} /* swap_f */




















