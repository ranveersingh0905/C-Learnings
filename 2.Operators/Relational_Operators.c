/*
------------------------------------------------------------
Program Name : Relational Operators in C
Date         : 18-07-2026
Description  : This program demonstrates the use of relational operators in
               C by taking two integer inputs from the user.

Relational operators are used to compare two values and return a boolean result (true or false).
1. Equal to (==)
2. Not equal to (!=)
3. Greater than (>)
4. Less than (<)
5. Greater than or equal to (>=)
6. Less than or equal to (<=)

It returns 1 (true) if the condition is satisfied and 0 (false) otherwise.

------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    // Declare variables
    int num1, num2;

   
    printf("Relational Operators in C \n\n");

   // Take input from the user
    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display entered numbers
    printf("\nYou entered:\n");
    printf("First Number  = %d\n", num1);
    printf("Second Number = %d\n\n", num2);

    // Demonstrating relational operators
    printf("Results of Relational Operators:\n");
    printf("---------------------------------\n");

    printf("%d == %d : %d\n", num1, num2, num1 == num2); // Equal to
    printf("%d != %d : %d\n", num1, num2, num1 != num2); // Not equal to
    printf("%d > %d  : %d\n", num1, num2, num1 > num2);  // Greater than
    printf("%d < %d  : %d\n", num1, num2, num1 < num2);  // Less than
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2); // Greater than or equal to
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2); // Less than or equal to

    return 0; 
    // Indicate successful program execution
}