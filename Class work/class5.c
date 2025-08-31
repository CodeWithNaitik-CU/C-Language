//CHECK POSITIVE NEGATIVE AND ZERO
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);
    if (a>0)
    {
        printf("The number is positive !!");
    }
    else if (a<0)
    {
        printf("The number is negative !!");
    }
    else
        printf("It is zero !!");
    
    return 0;
}
