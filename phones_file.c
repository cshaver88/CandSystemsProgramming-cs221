/*
 * Author:	Cayla Shaver
 *
 * File:	phones_file.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*----------------------------------------------------------*/
int main(int argc, char *argv[]){
    int count = 0;
    char line[50];  //line of input
    // char month[10];
    // int first, second, third; 
    int i, j;  // iterators
    // char *date;
    char parsed[50];
    FILE *input, *output;


    char parsed2[50];
    char first2[4];
    char second2[4];
    char third2[5];

    // XXX.XXX.XXXX 
    // (XXX) XXX-XXXX
    // XXX-XXX-XXXX
    // XXX XXX XXXX
    // XXXXXXXXXX




    //correct # of params ./p input.txt
    if (argc == 2 || argc == 3){
        // printf("ArgC: %d\n", argc);
        // printf("ArgV: %s\n", argv[1]);
        input = fopen(argv[1], "r");
        if(input == NULL){
            printf("This input file doesn't exist!\n");
            return -1;
        }
        if(argc == 3){
            output = fopen(argv[2], "w");
        }
        else{
            output = fopen("output.txt", "w");
        }
        while(fgets(line, 50, input) != NULL){
            // printf("Here's a line: %s\n", line);
            for(i = 0, j = 0; i < 50; i++){
                if(isdigit(line[i])){
                    parsed[j] = line[i];
                    j ++;
                    // printf("parsed1: %s\n", parsed);
                }
            }
            parsed[j] = '\0';
            // printf("parsed1: %s\n", parsed);
            strncpy(first2, parsed, 3);
            strncpy(second2, parsed+3, 3);
            strncpy(third2, parsed+6, 4);
            // printf("First: %s\n", first2);
            // printf("Second: %s\n", second2);
            // printf("Third: %s\n", third2);
            strcpy(parsed2, "(");
            strcat(parsed2, first2);
            strcat(parsed2, ") ");
            strcat(parsed2, second2);
            strcat(parsed2, "-");
            strcat(parsed2, third2);
            strcat(parsed2, "\0");
            // printf("parsed2: %s\n", parsed2);
            fputs(parsed2, output);
            fputs("\n", output);
        }
        // printf("%s\n", parsed);        
    }
    else{
        printf("No file names provided!\n");
    }

    fclose(input);
    fclose(output);

    return 0;
} /* main */



























