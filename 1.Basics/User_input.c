//Program : C program to take input from user
//Purpose : Taking input from user using scanf() and displaying it as output 

#include<stdio.h>

int main()
{
    //Declare variable
    int age;
    float percentage;
    char grade;

    //Taking input from user
    printf("Enter your age :");
    scanf("%d",&age);

    printf("Enter your percentage :");
    scanf("%f",&percentage);

    printf("Enter your Grade :");
    scanf(" %c",&grade);

    //Display the entered value
    printf("YOUR DETAILS \n");
    printf("Your age is %d years\n",age);
    printf("Your percentage is %.2f \n",percentage);
    printf("Your grade %c\n",grade);

    return 0;
}