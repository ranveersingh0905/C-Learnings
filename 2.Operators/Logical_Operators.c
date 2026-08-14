/*-------------------------------------------------------------
Program : Demonstration of Logical Operators in C
Purpose : To explain AND(&&),OR(||),and NOT(!)
Author  : Ranveer Singh
Date    : 19-07-2026
--------------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    //Variable declaration
    int num1,num2;

    //Taking input from the user
    printf("===== Logical Operators Demonstration =====\n\n");

    printf("Enter first Number :");
    scanf("%d",&num1);

    printf("Enter Second Number :");
    scanf("%d",&num2);

    printf("\n------Results------\n");

    //Logical AND(&&)
    //Returns 1 if both conditions are true

    printf("Logical AND(num1 > 0 && num2 > 0) = %d\n" ,(num1 > 0 && num2 > 0));

    //Logical OR(||)
    //Returns 1 if at least one condition is true

    printf("Logical OR (num1 > 0 || num2 > 0) = %d\n",(num1 > 0 || num2 > 0));

    //LOgical NOT(!)
    //Reverse the result of the condition

    printf("Logical NOT(!(num1 > 0)) = %d\n ", !(num1 > 0));

    //Program end message
    printf("\n Program executed successfully.\n");

    return 0;


}