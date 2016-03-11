/* File:     loop.c
 * Purpose:  Ask for a number 0 - 9. If invalid input prompt 
 * 			 up to 5 times if still invalid exit. If valid
 * 			 print powers of 2 up to input number. 
 *
 * Compile:  cc loop.c -o l
 * Run:      ./l
 *
 * Input:    The number to print powers of 2 to.
 * Output:   The powers of 2 up to the input number.
 */
#include <stdio.h>

int main(void) {
	int number;
	int index = 0;
	int two;
	int count = 0;
	int done = 0;
	int next;

	do{
		printf("Please enter a number between 0 and 9: \n");
		number = getchar();
		// printf("%d\n", number - '0');
		// printf("%d\n", getchar() == '\n');
		if (number >= 48 && number <= 57 && getchar() == '\n'){
			// printf("AHHHH\n");
			done = 1;
			printf("The powers of 2 up to %d are: \n", number - '0');
			two = 1;
			if(two == 1){
				two = 1;
				printf("%d\n", two);
			}
			for (int i = 1; i <= number - '0'; i ++){
				two *= 2;			
				printf("%d\n", two);
			}
		}
		else {
			while(getchar() != '\n');
			count ++;
		}
	}
	while (done == 0 && count < 5);
	

    return 0;
}  /* main */








