//Write a program to sum first 10 natural numbers using for loop
#include<stdio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum = sum + i;
    }
    printf("SUM - %d",sum);
    return 0;
}
