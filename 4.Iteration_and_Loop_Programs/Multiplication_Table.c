/*--------------------------------------------------------------------------------------------------------------------------------------------------------
Program : Multiplication Table
Purpose   : To display the multiplication table of a given number using do-while loop
Author    : Ranveer Singh
Date      : 06-08-2026
----------------------------------------------------------------------------------------------------------------------------------------------------------
*/

// C program to display the multiplication table of a given number using do-while loop
// A do-while loop is a control flow statement that allows code to be executed at least once and then repeatedly based on a given Boolean condition.

#include<stdio.h>

int main()
{
    //Variable declaration
    int number, i = 1; //number is the number for which the multiplication table is to be displayed, i is the counter initialized to 1

    //Accepting user input for the number
    printf("Enter a number to display its multiplication table : ");
    scanf("%d",&number);

    printf("\n Multiplication Table of %d is :\n", number); //Print the multiplication table title

    //Using do-while loop to display the multiplication table

    do
    {
        printf("%d x %d = %d \n", number, i, number * i); //Print the current multiplication result
        i++; //Increament the counter i by 1
    }
    while(i<=10); //Continue the loop until i is less than or equal to 10

}

