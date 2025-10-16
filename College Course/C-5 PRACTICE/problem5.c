//Write a program to sum first 10 natural numbers using do-while loop
#include<stdio.h>
int main()
{
    int sum,i;
    sum = 0;
    i = 1;
    do
    {
        sum = sum + i;
        i = i+1;
    } while (i<11);
    printf("SUM - %d",sum);
    
    return 0;
}
