/*--------------------------------------------------------------------------------------------------------------------------------
Program : Student Grade Calculator
Author  : Ranveer Singh
Date    : 02-08-2026
Purpose : Calculating grade student by taking marks as input from user by using if-else statement
----------------------------------------------------------------------------------------------------------------------------------- 
*/

//C Program to calculate the grade of student according to marks obtained by using if-else statement
//The if-else statement is a powerful decision-making statement and is used to control the flow of execution of statements.
/* The general form of a simple if-else statement is 
if (condition) {
   // Statements to execute if condition is true
} else {
    // Statements to execute if condition is false
}*/

#include<stdio.h>

int main()
{
    //Variable declaration
    int marks;

    printf("======= STUDENT GRADE CALCULATOR =======\n\n");
    printf("Enter your marks(0-100) to calculate grade :");

    //Taking marks as input from user
    scanf("%d",&marks);

    if (marks < 0 || marks > 100) //If the marks are less than 0 or greater than 100, the input is invalid
    {
        printf("\n Invalid input. Please enter marks between 0 and 100 \n");
    }

    else if (marks >= 90) //If the marks are greater than or equal to 90, the grade is A+
    {
        printf("\n Your grade is A+ \n");
    }

    else if (marks >= 80) //If the marks are greater than or equal to 80, the grade is A
    {
        printf("\n Your grade is A \n");
    }

    else if (marks >= 70) //If the marks are greater than or equal to 70, the grade is B 
    {
        printf("\n Your grade is B \n");
    } 

    else if (marks >= 60) //If the marks are greater than or equal to 60, the grade is C
    {
        printf("\n Your grade is C \n");
    }

    else if (marks >= 50 ) //If the marks are greater than or equal to 50, the grade is D
    {
        printf("\n Your grade is D \n");
    }

    else //If the marks are less than 50, the grade is F
    {
        printf("\n Your grade is F \n");
    }

    return 0;
}