/*----------------------------------------------------------------------------------------------------------------------
Program : Positive,Negative or Zero Checker
Author  : Ranveer Singh
Date    : 27-07-2026
Purpose : Demonstrates the use of simple if statements to check whether a number is positive, negative or zero.
------------------------------------------------------------------------------------------------------------------------
*/

//The if statement is a powerful decision-making statement and is used to control the flow of execution of statements. 
/* The general form of a simple if statement is
if(test_expression)
{
  statement-block
} 
  statement x


 The ‘statement-block’ may be a single statement or a group of statements. If the test expression is true, the statement-block will be executed; otherwise the 
 statement-block will be skipped and the execution will jump to the statement-x.
*/

// C program to check whether a number is positive, negative or zero

#include<stdio.h>

int main()
{
    //Variabe declaration

    int num;

    printf("====== POSITIVE,NEGATIVE OR ZERO CHECKER =======\n\n");
    printf("Enter a integer value to check whether it is positive, negative or zero :" );

    scanf("%d",&num);

    //Checking whether the number is positive, negative or zero using if statement

    if (num > 0) //If the number is greater than zero, it is positive
    {
        printf("\n The number %d is POSITIVE \n",num);

    }

    if (num == 0) //If the number is equal to zero, it is zero
    {
        printf("\n The number %d is ZERO \n",num);
    }

    if(num < 0) //If the number is less than zero, it is negative
    {
        printf("\n The number %d is NEGATIVE \n",num);
    }

    return 0;
}