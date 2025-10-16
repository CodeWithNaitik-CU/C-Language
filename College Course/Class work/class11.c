//SIMPLE CALCULATOR 
#include<stdio.h>
int main()
{
    float b;
    printf("Enter first number : ");
    scanf("%f",&b);
    char a;
    printf("Enter the arithmetic operator to perform calculation");
    scanf("%c",&a);
    float c;
    printf("Enter first number : ");
    scanf("%f",&c);
    if (a =='+')
    {
        printf("The result is %f",b+c);
    }
    else if (a == '-')
    {
        printf("The result is %f",b-c);
    }
    else if (a == '*')
    {
        printf("The result is %f",b*c);
    }
    else if (a == '/')
    {
        printf("The result is %f",b/c);
    }

    else
        printf("Arithmetic operator not found !!");
    return 0;
}
