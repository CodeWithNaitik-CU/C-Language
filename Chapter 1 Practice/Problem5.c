//CALCULATE THE SIMPLE INTEREST 
#include<stdio.h>

int main()
{
    float P,R,T,S,SI;
    printf("Enter the number of years :");
    scanf("%f",&T);
    printf("Enter the Principal amount :");
    scanf("%f",&P);
    printf("Enter the Rate :");
    scanf("%f",&R);
    S = P*R*T;
    SI = S/100;
    printf("The simple intrest is : %f",SI);
    return 0;
}
 