//Celcius to Farenheit using functions
#include<stdio.h>
float temp(float c);
int main()
{
    float c = 35;
    temp(c);
}
float temp(float c){
    float f = 1.8*c + 32;
    printf("Temperature in celcius is %.2f and %.2f in Farenheit..",c,f);
}