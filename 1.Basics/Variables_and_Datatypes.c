//Program : Introduction to Variables and Data Types
//Purpose : To demonstrate different data types ,variable , declaration, intialization,assingnment,and sizeof operator

#include<stdio.h>

int main()
{
    //------------------------------------ VARIABLE DECLARATION & INTIALIZATION ----------------------------------------------------------

    int age = 18;                // Stores whole numbers
    float height = 5.8;          // Stores decimal numbers
    double percentage = 85.79;   //Stores precise decimal numbers
    char grade = 'A';

    //String: Character array used to store text
    char name[] = "Ranveer Singh";

    //------------------------------------------ DISPLAYING VARIABLE VALUES ---------------------------------------------------------------

    printf("*********STUDENT INFORMATION*******************\n");

    printf("Name         : %s\n",name);
    printf("Age          : %d years \n",age);
    printf("Height       : %.lf feet \n",height);
    printf("Percentage   : %.2lf%% \n",percentage);
    printf("Grade        : %c\n", grade);

    //------------------------------------------------- ASSINGMENT ------------------------------------------------------------------------

    //Changing the value of an existing variable
    age = 21;

    printf("\n After changing age : %d years \n",age);

    //---------------------------------------------- sizeof() Operator --------------------------------------------------------------------

    printf("\n****************** SIZE OF DATA TYPES ********************** \n\n");

    printf("Size of int    : %zu bytes \n",sizeof(int));
    printf("Size of float  : %zu bytes \n",sizeof(float));
    printf("Size of double : %zu bytes \n",sizeof(double));
    printf("Size of char   : %zu bytes \n",sizeof(char));

    return 0;

}