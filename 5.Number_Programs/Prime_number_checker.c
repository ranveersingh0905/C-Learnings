/*--------------------------------------------------------------------------------------------------------
Program : Program to check whether the input number is prime or not
Purpose : C-Program work as prime number checker , checks the number given by user is prime number or not
----------------------------------------------------------------------------------------------------------*/

//Code to check whether a number is prime

#include <stdio.h>
int main() { 
    int num, i, flag = 0; //Variable declaration
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
     {
        // condition for non-prime
        if (num % i == 0)
         {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
