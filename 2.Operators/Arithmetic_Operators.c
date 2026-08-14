//Arithmetic Operators in C 
// This program demonstrates the use of arithmetic operators in C

/* In C Programming ,arthmetic operaters are used to perform mathematical calculations on numeric values (constants or variables). 
Operators are of two types: Binary operators and Unary operators .

Binary Arithmetic Operators-These operators require two operands to perform the operation. 
The following are the binary arithmetic operators in C:

1. Addition (+)->Addition operator is used to add two operands.
2. Subtraction (-)->Subtraction operator is used to subtract right operand from left operand..
3. Multiplication (*)->Multiplication operator is used to multiply two operands.
4. Division (/)->Division operator is used to divide left operand by right operand.
5. Modulus (%)->Modulus operator is used to find the remainder of the division of two operands.

Unary Arithmetic Operators-These operators require only one operand to perform the operation. 
The following are the unary arithmetic operators in C:
1. Increment (++)
2. Decrement (--)

*/

// C program to demonstrate the use of arithmetic binary operators.
//In this program we take two integer from the user and perform arithmetic operations on them.
// The result of each operation is stored in a variable and printed to the console.


#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);

    //Performing Arithmetic Operations.
        
    c = a + b;  // Addition
    printf("Addition: %d\n", c);
    
    c = a - b;  // Subtraction
    printf("Subtraction: %d\n", c);
    
    c = a * b;  // Multiplication
    printf("Multiplication: %d\n", c);
    
    c = a / b;  // Division
    printf("Division: %d\n", c);
    
    c = a % b;  // Modulus
    printf("Modulus: %d\n", c);
    
    return 0;
}