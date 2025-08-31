#include<stdio.h>
int main()
{
    int i = 1;
    int sum = 0;   // initialize sum properly

    while (i <= 10)
    {
        sum = sum + i;   // accumulate total
        i = i + 1;
    }

    printf("THE SUM WILL BE : %d", sum);

    return 0;
}
