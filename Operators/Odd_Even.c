/* Program : Simple Odd/Even Checker 
Purpose: To check if a number is odd or even using Arithmetic Operator */

//A simple C program to check whether a number is odd or even using the modulus operator. 
//The program prompts the user to enter an integer, then it checks if the number is divisible by 2. If it is, the number is even; otherwise, it is odd.

//Program to check whether a number is odd or even
#include <stdio.h>

int main() {
    // Variable to store the input number
    int num;

    printf("Enter a number: ");//Take input from user
    scanf("%d", &num);

    if (num % 2 == 0) {
        // Check if the number is divisible by 2
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}