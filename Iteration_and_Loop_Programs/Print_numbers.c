/*
-------------------------------------------------------------------------------------------------------------------------------
Program : Print Numbers Using While Loop
Author  : Ranveer Singh
Date    : 4-08-2026
Purpose : This program prints numbers from 1 to n using a while loop.
---------------------------------------------------------------------------------------------------------------------------------
*/

// C program to print numbers from 1 to n using a while loop
//While loop is a control flow statement that allows code to be executed repeatedly based on a given Boolean condition.

/*while loop is used when the number of iterations is not known beforehand and the loop continues until a specified condition 
evaluates to false.*/

#include<stdio.h>

int main()
{
    //Variable declaration
    int n, i = 1; //n is the upper limit and i is the counter initialized to 1

    //Accepting user input for the upper limit n
    printf("Enter the upper limit n : ");
    scanf("%d",&n);

    printf("\n Numbers from 1 to %d are : \n", n);

    //Using while loop to print numbers from 1 to n
    while(i <= n) //Condition to check if the counter i is less than or equal to n
    {
        printf("%d\n", i); //Print the current value of i
        i++; //Increment the counter i by 1
    }

    printf("\n"); //Print a newline character after printing all numbers

    return 0; //Return 0 to indicate successful execution of the program
}