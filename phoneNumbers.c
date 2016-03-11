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


/*------------------------------------------------------------------*/
int main (void) {
    char phoneNumber[14]; // phone number input (XXX)XXX-XXXX
    int num = 14;
    int temp[13];  // phone number output XXX.XXX.XXXX
    int max = 13;
    // int i, j;  // iterators
    // int num; // getchar()

    printf("Enter a phone number: (XXX)XXX-XXXX \n");
    fgets(phoneNumber, num, stdin);
    printf("strlen(phoneNumber) %lu\n", strlen("(415)422-5555"));
    printf("2:  %lu\n", strlen("(415)422-55555"));

    if (strlen(phoneNumber) > 13){
        printf("This phone number is invalid\n");
        return -1;
    }
    if ((int)phoneNumber[0] != 40){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[1] - '0' && 57 > (int)phoneNumber[1] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[2] - '0' && 57 > (int)phoneNumber[2] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[3] - '0' && 57 > (int)phoneNumber[3] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if ((int)phoneNumber[4] != 41){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[5] - '0' && 57 > (int)phoneNumber[5] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[6] - '0' && 57 > (int)phoneNumber[6] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[7] - '0' && 57 > (int)phoneNumber[7] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if ((int)phoneNumber[8] != 45){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[9] - '0' && 57 > (int)phoneNumber[9] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[10] - '0' && 57 > (int)phoneNumber[10] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[11] - '0' && 57 > (int)phoneNumber[11] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }
    if (48 < (int)phoneNumber[12] - '0' && 57 > (int)phoneNumber[12] - '0'){
        printf("This phone number is invalid.\n");
        return -1;
    }

    temp[0] = phoneNumber[1];
    temp[1] = phoneNumber[2];
    temp[2] = phoneNumber[3];
    temp[3] = (int)'.';
    temp[4] = phoneNumber[5];
    temp[5] = phoneNumber[6];
    temp[6] = phoneNumber[7];
    temp[7] = (int)'.';
    temp[8] = phoneNumber[9];
    temp[9] = phoneNumber[10];
    temp[10] = phoneNumber[11];
    temp[11] = phoneNumber[12];

    printf("The phone number is: ");
    for (int j = 0; j < 14; j ++){
        printf("%c", temp[j]);
    }

    printf("\n");

    return 0;
}/* main */



















