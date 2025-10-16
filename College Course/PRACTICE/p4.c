//Write a C program to swap two numbers (using a third variable).
#include<stdio.h>
int main()
{
    int a,b,c;
    a = 10;
    b = 20;
    printf("%d\n",a);
    printf("%d\n",b);
    c = a;
    a = b;
    b = c;
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}
