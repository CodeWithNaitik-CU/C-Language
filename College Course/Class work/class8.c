//DIVISIBILITY CHECK
#include<stdio.h>
int main()
{
    float a;
    printf("Enter dividend: ");
    scanf("%f",&a);
    float b;
    printf("Enter divisor: ");
    scanf("%f",&b);
    if ((int)a % (int)b == 0)
    {
        printf("It is divisible");
    }
    else 
        printf("It is not divisible");
    return 0;
}
