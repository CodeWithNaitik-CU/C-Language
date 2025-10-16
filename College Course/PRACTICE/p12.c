//Write a C program to find the largest of two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if (b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    else{
        printf("they are equal...!!");
    }
    
    
    return 0;
}
