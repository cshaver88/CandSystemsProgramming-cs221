/* File:  	stack.c
 *
 * Purpose:	Check whether or not the given input has the 
 * 			correct balanced () {} [] <>.
 *
 * Input:	String of text with or without () {} [] <>
 * Output:	Whether the given input is balanced or not
 * 
 *
 */

#include <stdio.h>
#include <string.h>

/*--------------------STACK INFO----------------------*/
#define STACK_SIZE 50

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty() {
	top=0;
}

char is_full() {
	return top==STACK_SIZE;
}

char push(char i) {
	if(is_full()) {
    	printf("stack overflow\n");
    }
	else{
    	contents[top++]=i;
	}
	return 0;
}

char is_empty() {
	return top ==0;
}

char pop(void) {
	if(is_empty()) {
    	return -1; //-1 means stack empty
	}
	else{
    	return contents[--top];
	}
} 
/* END STACK */

/*-------------------------------------------------------------------*/
int main(void) {
	// types of parenthesis  < >, ( ), [ ], { }.
	int c;
	int j = 0;
	int open;
	//true 0
	//false 1
	int balance = 1;
	int done = 1;

	do{
	// while(done != 0){
		printf("Please enter input with parenthesis or Q to quit: \n");
		
		while ((c = getchar()) != '\n'){
			if((c == 81 && (c = getchar()) == '\n')|| (c == 113 && (c = getchar()) == '\n')){
				done = 0;
				break;
			}
			switch (c){
				case 60: case 40: case 91: case 123:
					push(c);
					break;

				case 62: case 41: case 93: case 125: 
					open = pop();
					if ((c == '>' && open == '<') ||
						(c == ')' && open == '(') ||
						(c == ']' && open == '[') ||
						(c == '{' && open == '}')) { 
						break;
					}
					else {
						balance = 0;
						break;
					}

				default:
					//produces a balanced item
					j ++;  //not sure if I need this index
					// balance = 1;
					break;
			}
			if(balance == 0){
				printf("The input is unbalanced.\n");
				make_empty();
				while(getchar()!= '\n');
				break;
			}
		}
		if(balance == 1 && is_empty()) {
			printf("The input is balanced.\n");
		}
	// }
	balance = 1;	
	} while(done != 0);
	// make_empty();

    return 0;
}  /* main */

			









