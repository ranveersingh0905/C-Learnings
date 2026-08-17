/*--------------------------------------------------------------------------------------------------------------------------------------
Program : Factorial Finder 
Purpose : C program to calculate the factorial of non-negative integer 
Author  : Ranveer Singh
Date    : 17/08/2026
------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>

int main() {
    int n,i;
    unsigned long long factorial = 1;
    
    //Input the number
    printf("Enter a number :");
    scanf("%d", &n);

    //Check for negative number 
    if(n < 0){
        printf(" Factorial is not defined for negative numbers. \n ");
    }
    else{
        //Calculate factorial 
        for(i = 1; i <= n ; i++ ){
            factorial *= i;
        }

        //Display Result
        printf("Factorial of %d = %llu \n", n,factorial );
    }

    return 0;
}