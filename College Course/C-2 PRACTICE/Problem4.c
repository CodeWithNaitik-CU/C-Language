//PROGRAM TO CONVERT CELCIUS TO FARENHEIT
#include<stdio.h>

int main()
{
    float c, temp, f;
    printf("Enter the temperature in celcius :");
    scanf("%f",&c);

    temp = 1.8*c;
    f = temp + 32;
    printf("The final temperature is %f: ",f);
    return 0;
}
