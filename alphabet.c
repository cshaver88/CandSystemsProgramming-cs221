/* File:    alphabet.c
 *
 * Purpose: Count the number of occurrences of any letter 
 * 			upper or lower case from stdin.
 *
 * Compile: cc alphabet.c -o a
 * Usage:   ./a
 * 
 */
#include <stdio.h>
#include <stdlib.h>


/*-----------------------------------------------------------------*/
int main() {
	int c, i, other;
	int alphabet[26];
	for (i = 0; i <= 25; i ++){
    	//initialize the array elements to 0 
    	alphabet[i] =  0;
    }
	while ((c = getchar()) != '\n'){
		if (c == 'a' || c == 'A'){ 
    		alphabet[0]++;
    	}
    	if (c == 'b' || c == 'B'){ 
    		alphabet[1]++;
    	}
    	if (c == 'c' || c == 'C'){ 
    		alphabet[2]++;
    	}
    	if (c == 'd' || c == 'D'){ 
    		alphabet[3]++;
    	}
    	if (c == 'e' || c == 'E'){ 
    		alphabet[4]++;
    	}
    	if (c == 'f' || c == 'F'){ 
    		alphabet[5]++;
    	}
    	if (c == 'g' || c == 'G'){ 
    		alphabet[6]++;
    	}
    	if (c == 'h' || c == 'H'){ 
    		alphabet[7]++;
    	}
    	if (c == 'i' || c == 'I'){ 
    		alphabet[8]++;
    	}
    	if (c == 'j' || c == 'J'){ 
    		alphabet[9]++;
    	}
    	if (c == 'k' || c == 'K'){ 
    		alphabet[10]++;
    	}
    	if (c == 'l' || c == 'L'){ 
    		alphabet[11]++;
    	}
    	if (c == 'm' || c == 'M'){ 
    		alphabet[12]++;
    	}
    	if (c == 'n' || c == 'N'){ 
    		alphabet[13]++;
    	}
    	if (c == 'o' || c == 'O'){ 
    		alphabet[14]++;
    	}
    	if (c == 'p' || c == 'P'){ 
    		alphabet[15]++;
    	}
    	if (c == 'q' || c == 'Q'){ 
    		alphabet[16]++;
    	}
    	if (c == 'r' || c == 'R'){ 
    		alphabet[17]++;
    	}
    	if (c == 's' || c == 'S'){ 
    		alphabet[18]++;
    	}
    	if (c == 't' || c == 'T'){ 
    		alphabet[19]++;
    	}
    	if (c == 'u' || c == 'U'){ 
    		alphabet[20]++;
    	}
    	if (c == 'v' || c == 'V'){ 
    		alphabet[21]++;
    	}
    	if (c == 'w' || c == 'W'){ 
    		alphabet[22]++;
    	}
    	if (c == 'x' || c == 'X'){ 
    		alphabet[23]++;
    	}
    	if (c == 'y' || c == 'Y'){ 
    		alphabet[24]++;
    	}
    	if (c == 'z' || c == 'Z'){ 
    		alphabet[25]++;
    	}
    }
	printf("Letters: ");
	for(i = 0; i <= 25; ++i){
		printf("%d ", alphabet[i]);
	}
    printf("\n");
	return 0;
}
  /* main */








