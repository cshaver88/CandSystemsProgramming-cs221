#include <stdio.h>

/***********************************************************
 *
 * The print_octal function takes an integer in decimal form
 * and prints its octal form.
 */
void print_octal(int x)
{
	if(x == 8){
		printf("%d\n", x);
	}
	else{
		x = x % 8;
		print_octal(x);
	}

}
/********************************************************************
 *
 * The main function prompts users for inputs.
 * It calls print_octal to print its octal form.
 */
int main() {

  int x;
  printf("Enter a number between 0 and 32767:\n");
  scanf("%d", &x);
  //printf("In decimal, your nubmer is: %d",x);
  printf("In octal, your nubmer is: ");
  print_octal(x);
  printf("\n");
  return 0;








}