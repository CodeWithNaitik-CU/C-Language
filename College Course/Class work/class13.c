//CHECK LEAP YEAR 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the year to check : ");
    scanf("%d",&a);
    if (a % 4 == 0 || a % 400 == 0)
    {
        printf("It is a leap year");
    }
    else
        printf("Entered year is not a leap year");
    return 0;
}
