/* File:     phoneNumbers.c
 * Purpose:  Verify if a phone number entered by the user 
 *           is properly formatted.
 *
 * Compile:  cc phoneNumbers.c -o ph
 * Run:      ./ph
 *          
 * Output:   Valid or Invalid
 * 
 */

#include <string.h>
#include <stdio.h>

 int max = 50;

/*------------------------------------------------------------------*/
int main (void) {
    int phoneNumber[max]; // phone number input (XXX)XXX-XXXX
    int num;
    int temp[12];  // phone number output XXX.XXX.XXXX
    int i = 0, j;  // iterators
    // int num; // getchar()

    printf("Enter a phone number: (XXX)XXX-XXXX \n");

    while ((num = getchar()) != '\n'){
        phoneNumber[i] = num;
        i ++;
    }
    // printf("Here\n");
    for (j = 0; j < max; j ++){
        if (i > 13){
            printf("This phone number is invalid\n");
            return -1;
        }
        if (phoneNumber[0] != 40){
            printf("This phone number is invalid.\n");
            return -1;
        }
        if (48 < phoneNumber[1-3] - '0' && phoneNumber[1-3] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[0] = phoneNumber[1];
        }
        if (48 < phoneNumber[2] - '0' && phoneNumber[2] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[1] = phoneNumber[2];
        }
        if (48 < phoneNumber[3] - '0' && phoneNumber[3] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[2] = phoneNumber[3];
        }
        if (phoneNumber[4] != 41){
            printf("This phone number is invalid.\n");
            return -1;
        }
        if (48 < phoneNumber[5] - '0' && phoneNumber[5] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[4] = phoneNumber[5];
        }
        if (48 < phoneNumber[6] - '0' && phoneNumber[6] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[5] = phoneNumber[6];
        }
        if (48 < phoneNumber[7] - '0' && phoneNumber[7] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[6] = phoneNumber[7];
        }
        if (phoneNumber[8] != 45){
            printf("This phone number is invalid.\n");
            return -1;
        }
        if (48 < phoneNumber[9] - '0' && phoneNumber[9] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[8] = phoneNumber[9];
        }
        if (48 < phoneNumber[10] - '0' && phoneNumber[10] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[9] = phoneNumber[10];
        }
        if (48 < phoneNumber[11] - '0' && phoneNumber[11] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[10] = phoneNumber[11];
        }
        if (48 < phoneNumber[12] - '0' && phoneNumber[12] - '0' < 57){
            printf("This phone number is invalid.\n");
            return -1;
        }
        else{
            temp[11] = phoneNumber[12];
        }
    }
    printf("The phone number is: ");

    for(int k = 0; k < 12; k ++){
        if(k == 3 || k == 7){
            int dot = 46;
            temp[k] = (char)dot;
            printf("%c", temp[k]);
        }
        else{
            printf("%d", temp[k] - '0');
        }
    }
    printf("\n");


    return 0;
}/* main */







































