/*
 * Author:	Cayla Shaver
 *
 * File:	product.c
 * 
 * Compile:	gcc -std=c99 product.c -o p
 * Run:		./p
 *
 * Purpose:	Use command line arguments to add, subtract or
 * 			multiply the input from the command line.
 *
 * Input:	-a = add the command line ints
 *			-s = subtract the command line ints
 *			-m = multiply
 *	
 * Output:	Depending upon the input the output will be 
 *			the sum, difference or product.
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double add(int argc, char *argv[]);
double subtract(int argc, char *argv[]);
double multiply(int argc, char *argv[]);

/*----------------------------------------------------------*/
int main(int argc, char *argv[]){

	double result = 0;

	if(argc > 0){
		if(strcmp(argv[1], "-a") == 0){
			result = add(argc, argv);
		}
		if(strcmp(argv[1], "-s") == 0){
			result = subtract(argc, argv);
		}
		if(strcmp(argv[1], "-m") == 0){
			result = multiply(argc, argv);
		}
	}
	printf("%f\n", result);

	// a.out -a 8 2 4
 //    14
 //    a.out -s 10 1 9 3 3
 //    -6
	// a.out -m 3 1 2 4
	// 24

	return 0;

} /* main */


/*----------------------------------------------------------*/
double add(int argc, char *argv[]){
	double result = 0;
	// printf("In add.\n");

	for(int i = 0; i < argc; i ++){
		result += atoi(argv[i]);
	}

	return result;

} /* add */


/*----------------------------------------------------------*/
double subtract(int argc, char *argv[]){
	double result = atoi(argv[2]);
	// printf("In subtract.\n");

	for(int i = 3; i < argc; i ++){
		result -= atoi(argv[i]);
	}
	
	return result;

} /* subtract */


/*----------------------------------------------------------*/
double multiply(int argc, char *argv[]){
	double result = atoi(argv[2]);
	// printf("In multiply.\n");

	for(int i = 3; i < argc; i ++){
		result *= atoi(argv[i]);
	}

	return result;

} /* multiply */













