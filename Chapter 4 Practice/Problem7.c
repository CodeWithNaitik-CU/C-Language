// Calculate factorial of the given number
#include<stdio.h>
int main()
{

    int a;
    printf("Enter the number for factorial : ");
    scanf("%d",&a);
    int i;
    i = 1;
    int sum = 1;

    for (i = 1; i <= a; i++)
    {
        sum = sum*i;

    }
    printf("The factorial of the number is : %d",sum);

    return 0;
}
