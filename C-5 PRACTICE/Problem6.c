#include<stdio.h>
int main()
{
    int a = 8;
    int i;
    i = 1;
    int sum = 0;
    do
    {
        sum = sum + a*i;
        i = i + 1;
    } while (i < 11);
    printf("The sum is %d",sum);
    return 0;
}
