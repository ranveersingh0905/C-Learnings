/*-----------------------------------------------------------------------------------------------------
Program  -Demonstration of Assignment Operators in C
Purpose  -To explain the usage of assignment operators in C such as =, +=, -=, *=, /=, %= 
Author   - Ranveer Singh
Date     - 21/07/2026
-------------------------------------------------------------------------------------------------------
*/

/*Assignment Operators in C are used to assign values to variables. The most common assignment operator is the equal sign (=), 
which assigns the value on the right to the variable on the left.
In addition to the basic assignment operator, C also provides compound assignment operators that combine an arithmetic operation
with assignment. These operators perform the operation on the variable and then assign the result back to that variable.
These compound assignment operators also krnown as shorthand operators.
These shorthand operators also help in reducing the code length and improving readability.


The following are the assignment operators in C:
= (Simple Assignment)
+= (Add and Assign)
-= (Subtract and Assign)
*= (Multiply and Assign)
/= (Divide and Assign)
%= (Modulo and Assign)
*/

// C program to demonstrate the use of assignment operators in C

#include<stdio.h>

int main(){
     //Variable declaration
     int num,value;

        //Taking input from the user
        printf("===== Assignment Operators Demonstration =====\n\n");
        printf("Enter a intial value of num :");
        scanf("%d",&num);

        printf("Enter a value to perform assignment operations :");
        scanf("%d",&value);

        //Display original value 
        printf("\nOriginal value of num = %d\n",num);

        //Assignment Operator(=)
        num = value; //Assigning value to num
        printf("\n After Assingment (num = value) , value of num = %d\n",num);

        //Resetting num to original value
        printf("\n Enter a new value to reset num :");
        scanf("%d",&num);

        //Addition Assignment Operator(+=)
        num += value; //Equivalent to num = num + value
        printf("\n After Addition Assingment (num += value) , value of num = %d\n",num);
        
          //Resetting num value
        printf("\n Enter a new value to reset num :");
        scanf("%d",&num);

        //Subtraction Assignment Operator(-=)
        num -= value; //Equivalent to num = num - value
        printf("\n After Subtraction Assingment (num -= value) , value of num = %d\n",num);

        //Resetting num value
        printf("\n Enter a new value to reset num :");
        scanf("%d",&num);

        //Multiplication Assignment Operator(*=)
        num *= value; //Equivalent to num = num * value
        printf("\n After Multiplication Assignment (num *= value) , value of num = %d\n",num);

        //Resetting num value 
        printf("\n Enter a new value to reset num :");
        scanf("%d",&num);

        //Division Assignment Operator(/=)
        
        if (value != 0) //Check for division by zero
        {
            num /= value; //Equivalent to num = num/value
            printf("\n After Division Assignment (num /= value) , value of num = %d\n",num);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        
        //Resetting num value
        printf("\n Enter a new value to reset num :");
        scanf("%d",&num);

        //Modulus Assignment Operator(%=)
        if (value != 0) //Check for division by zero
        {
            num %= value; //Equivalent to num = num % value
            printf("\n After Modulus Assignment (num %%= value) , value of num = %d\n",num);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }

        return 0;
}
