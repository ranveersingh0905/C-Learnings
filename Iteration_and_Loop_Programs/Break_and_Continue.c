/*
------------------------------------------------------------------------------------------------------------
Program : break and continue statements demonstration
Purpose   : To demonstrate the use of break and continue statements in loops
Author    : Ranveer Singh
Date      : 09-08-2026
------------------------------------------------------------------------------------------------------------
*/

// C program to demonstrate the use of break and continue statements in loops
// A break statement is used to exit a loop prematurely, while a continue statement skips the current iteration and moves to the next iteration of the loop.

#include<stdio.h>

int main()
{
    //Variable declaration
    int i; //i is the counter variable

    printf("Enter a number between 1 and 10 to demonstrate break and continue statements : \n\n ");
    scanf("%d",&i); //Accepting user input for the number

    for(i=1; i<=10; i++) //Using a for loop to iterate from 1 to 10
    {
        //Skipping the iteration when i is equal to 5 using continue statement
        if(i == 5) //If the counter variable i is equal to 5
        {
            continue; //Skip the rest of the loop body and move to the next iteration
        }
        
        //Breaking the loop when i is equal to 8 using break statement
        if(i == 8) //If the counter variable i is equal to 8
        {
            break; //Exit the loop prematurely
        }
        printf("%d \n", i); //Print the current value of i
    }
    printf("\nThe loop has been exited using break statement when i is equal to 8.\n");
    //Print a message indicating that the loop has been exited

    return 0; //Return 0 to indicate successful execution of the program
}