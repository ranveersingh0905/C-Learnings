/*
 * Program     : Leap Year Checker
 * Purpose     : C Program to check whether the entered by the user is a leap year.
 * Description : Leap year is year which has 366 days while normal year has 365 days  
 
 * Leap Year Rules:
      1. A year divisible by 400 is a leap year.
      2. A year only divisible by 100 not 400 is not a leap year.
      3. A year divisible by 4 is a leap year.
      4. Otherwise, it is not a leap year.
 */

#include <stdio.h>

int main(void)
{
    int year;

    // Ask the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Validate the input
    if (year <= 0)
    {
        printf("Invalid year. Please enter a positive year.\n");
        return 1;
    }

    // Check whether the year is a leap year
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}