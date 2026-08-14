/*---------------------------------------------------------------------------------------------------------------------------------
Program : Voting Eligibility Checker
Author  : Ranveer Singh
Date    : 27-07-2026
Purpose : Demonstrates the use of decision-making statements to check whether a person is eligible to vote or not based on
 their age by using if-else statement.
-----------------------------------------------------------------------------------------------------------------------------------
*/

//The if-else statement is a powerful decision-making statement and is used to control the flow of execution of statements.
/* The general form of a simple if-else statement is 
if (condition) {
    // statements to execute if condition is true
} else {
    // statements to execute if condition is false
}

If the test expression is true, then the true-block statement(s), immediately following the if statements are executed; otherwise,
the false block statement(s) are executed.
*/

// C program to check whether a person is eligible to vote or not based on their age

#include<stdio.h>

int main()
{
    //Variable declaration
    int age;

    printf("====== VOTING ELIGIBILITY CHECKER =======\n\n");
    printf("Enter your age to check whether you are eligible to vote or not :");

    scanf("%d",&age);

    //Checking whether the person is eligible to vote or not using if-else statement

    if (age >= 18) //If the age is greater than or equal to 18, the person is eligible to vote
    {
        printf("\n You are ELIGIBLE to vote \n");
    }
    else //If the age is less than 18, the person is not eligible to vote
    {
        printf("\n You are NOT ELIGIBLE to vote \n");
    }

    return 0;
}