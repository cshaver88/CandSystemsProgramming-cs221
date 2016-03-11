/* File:     octal.c
 * Purpose:  Calculate the octal representation of a given number
 *
 * Compile:  cc octal.c -o o
 * Run:      ./o
 *
 * Input:    The number to be converted into octal.
 * Output:   The input number in its octal representation.
 */
#include <stdio.h>

int main(void) {
	int number;
	int octal = 0;
	int remain;
	int index = 1;

	printf("Please enter a  number between 0 and 32767: \n");
	scanf("%d", &number);

	while(number != 0){
		remain = number % 8;
		number /= 8;
		octal += remain * index;
		index *= 10;
	}

	printf("The entered number in octal is: %d\n", octal);

    return 0;
}  /* main */




