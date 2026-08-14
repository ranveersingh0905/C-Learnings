/*
---------------------------------------------------------------------------------------------------------------------------------
Program : Bank Loan Eligibility Checker
Author  : Ranveer Singh
Date    : 02-08-2026
Purpose : Demonstrates the use of decision-making statements to check whether a person is eligible for a bank loan or not based on 
their age and income by using nested if-else statement.
-----------------------------------------------------------------------------------------------------------------------------------
*/

/*C Program to check whether a person is eligible for a bank loan or not based on their age, income and credit score by using 
 nested if-else statement */

//The if-else statement is a powerful decision-making statement and is used to control the flow of execution of statements.

/* The general form of a simple if-else statement is
if (condition) {
    // statements to execute if condition is true
} else {
    // statements to execute if condition is false
}
*/

#include<stdio.h>

int main()
{
    //Variable declaration
    int age;
    float income;
    int credit_score;

    printf("====== BANK LOAN ELIGIBILITY CHECKER =======\n\n");

    printf("Enter your Age :"); //Taking age as input from user
    scanf("%d",&age);

    printf("Enter your Monthly Income :"); //Taking income as input from user
    scanf("%f",&income);

    printf("Enter your Credit Score :"); //Taking credit score as input from user
    scanf("%d",&credit_score);

    if (age >= 21 && age <= 60) //If the age is between 21 and 60, the person is eligible for a bank loan
    {
        if (income >= 30000) //If the income is greater than or equal to 30000, the person is eligible for a bank loan
        {
            if (credit_score >= 700) //If the credit score is greater than or equal to 700, the person is eligible for a bank loan
            {
                printf("\n You are ELIGIBLE for a Bank Loan \n");

            }
            else //If the credit score is less than 700, the person is not eligible for a Bank Loan
            {
                printf("\n You are NOT ELIGIBLE for a Bank Loan due to low credit score \n");
            }
        }
        else //If the income is less than 30000, the person is not eligible for a Bank Loan
        {
            printf("\n You are NOT ELIGIBLE for a Bank Loan due to low income \n");
        }
    }
    else //If the age is less than 21 or greater than 60, the person is not eligible for a Bank Loan
    {
        printf("\n You are NOT ELIGIBLE for a Bank Loan due to age restriction \n");
    }
    return 0;


}