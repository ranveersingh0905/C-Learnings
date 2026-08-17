/*-----------------------------------------------------------------------------------------------------------------------------------------
Program     : Palindrome Number Checker
Purpose     : C program to check a number is palindrome or not
Description : Number whose reverse is same as the original is called Palindrome Number. Example : 121,22422,etc
Author      : Ranveer Singh
Date        : 17/08/2026
-------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main() 
{
    int num,original,reverse = 0,remainder;

    //Take input from the user 
    printf("Enter a number :");
    scanf("%d",&num);

    //Store the original number
    original = num;

    //Reverse the number
    while(num != 0){
        remainder = num % 10;
        reverse = reverse * 10 + remainder ;
        num = num/10;
    } 

    //Check whether the number is palindrome or not
    if( original == reverse )
    {
        printf("%d is a palindrome number \n ", original);
    }
    else
    {
        printf("%d is not a palindrome number\n ", original);
    }

    return 0;
}