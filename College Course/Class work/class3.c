//GREATEST OF THREE NUMBERS 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    printf("Enter Third number : ");
    scanf("%d",&c);
//TO CHECK
    if (a>b && a>c)
    {
        printf("%d is greatest",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is greatest",b);
    }
    else if (c>a && c>b)
    {
        printf("%d is greatest",c);
    }
    return 0;}
