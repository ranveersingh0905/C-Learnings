/*--------------------------------------------------------------------------------------------------------------------------------
Program : Menu Driven Calculator
Author  : Ranveer Singh
Date    : 03-08-2026
Purpose : To create a menu-driven calculator that performs basic arithmetic operations such as addition, subtraction,
multiplication, and division based on user input. The program will use switch-case decision-making statements to determine which 
operation to perform.
------------------------------------------------------------------------------------------------------------------------------------
*/

// C Program based on switch-case statements to implement a menu-driven calculator 

/*The switch-case statement is a powerful decision-making statement and is used to control the flow of execution of statements
based on the value of a variable.*/

#include<stdio.h>

int main()
{
    //Variable declaration
    int choice;
    float num1,num2;

    //Display calculator menu
    printf("====== MENU DRIVEN CALCULATOR =======\n\n");
    printf("Select an operation to perform:\n");
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    //Taking user choice as input
    printf("\n Enter your choice (1-4) : \n ");
    scanf("%d",&choice);

    //Taking two numbers as input from user
    printf("\n Enter two numbers : \n");
    scanf("%f %f",&num1,&num2);

    //Executing the operation based on user choice using switch-case statement
    switch(choice)
    {
        case 1: //Addition
        printf("\n Result of Addition : %.2f \n",num1+num2); //%.2f displays a floating-point number with 2 decimal places
        break; //Exit the switch-case statement after executing the case

        case 2: //Subtraction
        printf("\n Result of Subtraction : %.2f \n",num1-num2);
        break;

        case 3: //Multiplication 
        printf("\n Result of Multiplication : %.2f \n",num1*num2);
        break;

        case 4: //Division
        if(num2 != 0) //Check if the divisor is not zero to avoid division by zero error
        {
            printf("\n Result of Division : %.2f \n",num1/num2);
        }
        else
        {
            printf("\n Error: Division by zero is not allowed.\n");
        }
        break;

        //Executes when the user enters an invalid choice
        default:
        printf("\n Invalid choice! Please select a valid operation (1-4).\n");
    }

    return 0; //Return 0 to indicate successful execution of the program
   
}
