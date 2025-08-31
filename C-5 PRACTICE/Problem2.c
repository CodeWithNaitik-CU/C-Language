//Multiplication table of 10 in reversed order 

#include<stdio.h>
int main()
{
    int i;
    i = 10;
    int n = 10;
    while (i>=1)
    {
        printf("%d multiply by %d gives %d\n",n,i,n*i);
        i = i - 1;
    }
    
    return 0;
}
