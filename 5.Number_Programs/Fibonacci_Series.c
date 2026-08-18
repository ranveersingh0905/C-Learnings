/*-----------------------------------------------------------------------------------------------------------------------------------------------
Program : Fibonacci Series printer 
Purpose : C-Program print the first n terms of the Fibonacci Series using iteration.
Date    : 18/08/2026

Fibonacci Series -> 0 1 1 2 3 5 8 13 21 ........
Discription -> nth term is sum of (n-1)th and (n-2)th term
-------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main(void)
{
    int n;
    int first = 0 ,second = 1, next;

    //Ask user for the number of terms
    printf("Enter the number of terms :");
    scanf("%d",&n);

    //Validate the input 
    if(n <= 0)
    {
        printf("Please enter a positive number of terms. \n");
        return 1;
    }

    printf("Fibonacci Series :");

    //Generate and print fibonacci Series
    for(int i = 1; i <= n; i++)
    {
        printf("%d",first);

        //Print space between terms
        if( i < n)
        printf(" ");

        //Calculate the next term
        next = first + second;
        first = second;
        second = next ;
    }

    printf("\n");

    return 0;
}