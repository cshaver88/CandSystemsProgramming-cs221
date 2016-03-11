/*
 * Author:	Cayla Shaver
 *
 * File:	date.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*----------------------------------------------------------*/
int main(void){
    int count = 0;
    char line[50];  //line of input
    // char month[10];
    int month, day, year; // date input 9-13-2010 or 9/13/2010 no Spaces!
    int i = 0, j = 0;  // iterators
    // char *date;
    char parsed[50];
    char day2[3];
    char year2[5];

    printf("Enter a date XX-XX-XXXX or XX/XX/XXXX:  \n");
    if(fgets(line, 50, stdin) != NULL){
    	count = sscanf(line, "%d-%d-%d", &month, &day, &year);
        // printf("--%d\n", count);
        //now check &month
        if (count != 3){
            count = sscanf(line, "%d/%d/%d", &month, &day, &year);
            if(count != 3){
                printf("Invalid input.\n");
                return -1;
            }
        }
        if(1 <= month && month <= 12){
            switch(month){
                case 1:
                    strcpy(parsed, "January ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 2:
                    strcpy(parsed, "February ");
                    if(1 <= day && day <= 29){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 3:
                    strcpy(parsed, "March ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 4:
                    strcpy(parsed, "April ");
                    if(1 <= day && day <= 30){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 5:
                    strcpy(parsed, "May ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 6:
                    strcpy(parsed, "June ");
                    if(1 <= day && day <= 30){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 7:
                    strcpy(parsed, "July ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 8:
                    strcpy(parsed, "August ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 9:
                    strcpy(parsed, "September ");
                    if(1 <= day && day <= 30){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 10:
                    strcpy(parsed, "October ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 11:
                    strcpy(parsed, "November ");
                    if(1 <= day && day <= 30){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                case 12:
                    strcpy(parsed, "December ");
                    if(1 <= day && day <= 31){
                        // printf("Day: %d\n", day);
                        sprintf(day2, "%d", day);
                        strcat(parsed, day2);
                        strcat(parsed, ", ");
                        sprintf(year2, "%d", year);
                        strcat(parsed, year2);
                        printf("%s\n", parsed);
                    }
                    else{
                        printf("Invalid Day.\n");
                        return -1;
                    }
                    break;

                default:
                    return -1;   
            }
        }
        else{
            printf("Invalid Input.\n");
        }       
    }
    return 0;
} /* main */














