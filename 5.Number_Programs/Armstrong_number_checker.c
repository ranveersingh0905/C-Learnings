/*--------------------------------------------------------------------------------------------------------------------------------------------------
Program     : Armstrong Number Checker
Description : An Armstrong number is a number whose sum of each digit raised to the power of the number of digits is equal to the original number .
Example     : 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
Date        : 16/08/2026 
----------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    //Variable declaration
    int number, originalNumber, digitCount = 0;
    int digit,temp ;
    long long sum = 0;

    //Take input from user
    printf("Enter a postive number :");
    scanf("%d",&number);

    //Store the original Number for further comparison
    originalNumber = number ;

    //Count the number of digits
    temp = number;

    if(temp == 0)
    {
        digitCount = 1;
    } 
    else
    {
        while( temp != 0)
        {
            digitCount++;
            temp /= 10;
        }
    }

    //Calculate the sum of digits raised to digitCount
    temp = number;

    while(temp != 0)
    {
        digit = temp % 10;
        sum += (long long)pow(digit,digitCount);
        temp /= 10;
    }

    //Check whether the number is an armstrong number

    if(sum == originalNumber)
    {
        printf("%d is an Armstrong Number !\n",originalNumber);
    }
    else
    {
        printf("%d is not an Armstrong Number !",originalNumber);
    }

    return 0;
    
}