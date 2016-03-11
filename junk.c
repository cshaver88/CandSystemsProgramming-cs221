#include <stdio.h>

int main(void){
	const int row = 3; 
	const int col = 3;
	int i, j;
	int value = 1;
	int table[3][3];

	// printf("%d\n", sizeof(table) / sizeof(int));

	for (i = 2; i >= 0; i --){
		for (j = 0; j < col; j ++){
			table[i][j] = value ++;	
			printf("%d", table[j][i]);	
		}
	}
	printf("\n");
//1 2 3 4 5 6 7 8 9	
//3 6 9 2 5 8 1 4 7

}