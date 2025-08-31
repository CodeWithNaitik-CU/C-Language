#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number for factorial : ");
    scanf("%d",&a);
    int i = 1 ; int sum = 1;
    do
    {
        sum = sum*i;
        i = i + 1;
    } while (i<=a);
    printf("The factorial for the given number is : %d",sum);


    return 0;
}
