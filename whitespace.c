#include <stdio.h>

int main (void) {
	int whitespace = 0;
	int tab = 0;
	int newline = 0;
	int words = 0;
	int c;
	int done = 0;

	while (done == 0){
		c = getchar();
		if (c == '\n'){
			newline ++;
		}
		if (c == '\t'){
			tab ++;
		}
		if (c == ' '){
			whitespace ++;
		}
		if (c == EOF){
			done = 1;
		}
	}
	printf("whitespaces: %d\n", whitespace);
	printf("tabs: %d\n", tab);
	printf("newlines: %d\n", newline);
	return 0;
}