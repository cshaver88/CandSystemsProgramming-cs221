#include<stdio.h>

int main(void)
{
  const int row=4;
  const int col=4;
  int i, j;
  int value=1;
  int table[row][col];
  for (j=0; j < col; j++)
    for(i=row-1; i >= 0; i--)
      table[i][j]=value++;

  for(i=0; i<row; i++)
    {
      for(j=0; j< col; j++)
	printf("%d ", table[i][j]);
      printf("\n");
    }


  for(int k = 3; k >= 0; k --){//columns?
    for(int m = 0; m < row; m ++){
      printf("%d ", table[m][k]);
    }
    printf("\n");

  }

  // based on the created table contents, implement nested loop 
  // to print the table contents as follow:
  // 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1


}