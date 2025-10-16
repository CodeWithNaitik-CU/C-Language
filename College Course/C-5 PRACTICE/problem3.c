//Write a program to sum first 10 natural numbers using while loop
#include<stdio.h>
int main()
{
    int i,sum;
    i = 1;
    sum = 0;
    while (i<11)
    {
        sum = sum + i;
        i++;
    }
    printf("SUM - %d",sum);
    
    return 0;
}
