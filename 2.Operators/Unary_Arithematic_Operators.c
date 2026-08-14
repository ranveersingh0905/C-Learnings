/*
 * Program Name : Unary Arithmetic Operators in C
 * Date         : 17/07/2026
 * Description  :
 * This program accepts an integer from the user and demonstrates
 * the use of unary arithmetic operators in C:
 *   1. Unary Plus (+)
 *   2. Unary Minus (-)
 *   3. Pre-Increment (++variable)
 *   4. Post-Increment (variable++)
 *   5. Pre-Decrement (--variable)
 *   6. Post-Decrement (variable--)
 *
 * Compiler     : GCC
 
 */

#include <stdio.h>

int main()
{
    // Variable Declaration 
    int n;

    // Taking Input from User 
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\n=====================================\n");
    printf("   UNARY ARITHMETIC OPERATORS IN C\n");
    printf("=====================================\n\n");

    // Display Original Value
    printf("Original Value = %d\n\n", n);

    // Unary Plus
    printf("Unary Plus (+number)    = %d\n", +n);

    // Unary Minus  
    printf("Unary Minus (-number)    = %d\n\n", -n);

    // Pre-Increment
    printf("Pre-Increment (++number)  = %d\n", ++n);

    // Post-Increment
    printf("Post-Increment (number++) = %d\n", n++);
    printf("Value after Post-Increment = %d\n\n", n);

    // Pre-Decrement
    printf("Pre-Decrement (--number)  = %d\n", --n);

    // Post-Decrement
    printf("Post-Decrement (number--) = %d\n", n--);
    printf("Value after Post-Decrement = %d\n", n);

    return 0;
}