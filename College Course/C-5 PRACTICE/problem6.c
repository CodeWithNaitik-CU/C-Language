//write program to calculate the sum of the numbers occuring in the multiplication table of 8.
#include<stdio.h>
int main()
{
    int n = 8;
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum = sum + n*i;
    }
    printf("SUM - %d",sum);
    
    return 0;
}
