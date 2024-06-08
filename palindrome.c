#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int number, storage, remainder, reversed = 0;
    
    printf("Enter your number: ");
    scanf("%d", &number);

    storage = number;
    
    while(storage != 0) {
        remainder = storage % 10;
        reversed = (reversed * 10) + remainder;
        storage /= 10;
    }

    if(reversed == number) {
        printf("The number is a palindrome.");
    }
    else {
        printf("No! The number is not a palindrome.");
    }

    return EXIT_SUCCESS;
}