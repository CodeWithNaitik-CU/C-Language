//Write a C program to find the largest of three numbers.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    a = 10;
    b = 30;
    c = 25;
    if (a>b && a>c)
    {
        printf("%d is the largest among..!!",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is the largest among..!!",b);
    }
    else{
        printf("%d is the largest among..!!",c);
    }
    
    
    return 0;
}
