/*----------------------------------------------------------------------------------------------------------------------------------
Program : Sum of First n Natural Numbers using For Loop
Author  : Ranveer Singh
Date    : 05-08-2026
Purpose : This program calculates the sum of the first n natural numbers using a for loop.
----------------------------------------------------------------------------------------------------------------------------------  */

// C program to calculate the sum of the first n natural numbers using a for loop
// A for loop is a control flow statement that allows code to be executed repeatedly based on a given Boolean condition. 
// It is typically used when the number of iterations is known beforehand.

#include<stdio.h>

int main()
{
    //Variable declaration
    int n,i;
    int sum = 0; //Variable to store the sum of the first n natural numbers, initialized to 0

    //Accepting user input for the upper limit n
    printf("Enter a positive integer n : ");
    scanf("%d",&n);

    //Using for loop to calculate the sum of the first n natural numbers
    for(i=1; i <= n; i++) //Loop starts from 1 and continues until i is less than or equal to n
    {
        sum += i; //Add the current value of i to sum

    }

    //Printing the result
    printf("Sum of first %d natural numbers is : %d\n", n,sum); //Print the sum of the first n natural numbers

}
