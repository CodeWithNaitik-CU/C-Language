//Write a C program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    int celcius;
    celcius = 36;
    float f;
    f = (1.8*celcius) + 32;
    printf("%.2f",f);
    return 0;
}
