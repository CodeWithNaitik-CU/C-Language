//WRITE A PROGRAM THAT READS TWO NUMBERS FROM KEYBOARD AND GIVES THEIR ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION AND MODULUS
#include<stdio.h>
int main()
{
    int a;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);

    int b;
    printf("ENTER SECOND NUMBER : ");
    scanf("%d",&b);

    char c;
    printf("Enter the operator(*,+,-,/) : ");
    scanf(" %c",&c);

    if (c == '+')
    {
        printf("%d + %d = %d",a,b,a+b);
    }
    else if (c == '-')
    {
        printf("%d - %d = %d",a,b,a-b);
    }
    else if (c == '*')
    {
        printf("%d X %d = %d",a,b,a*b);
    }
    else if (c == '/')
    {
        printf("%d / %d = %d",a,b,a/b);
    }
    else
    {
        printf("YOU ENTERED SOMETHING WRONG !!");
    }
    
    
    return 0;
}