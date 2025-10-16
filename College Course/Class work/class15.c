//absolute value of a number 
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the number : ");
    scanf("%f",&a);
    if (a<0)
    {
        printf("The result is : %.2f",a*-1);
    }
    else if (a > 0)
    {
        printf("The result is : %.2f",a);
    }
    else
        printf("You entered a zero !!");
    
    
    return 0;
}
