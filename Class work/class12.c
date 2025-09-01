#include<stdio.h>
int main()
{
    float km;
    printf("Enter the distance in kms..");
    scanf("%f",&km);
    printf("Distance in meters - %.2f\n",km*1000);
    printf("Distance in Centimeters - %.2f\n",km*100000);
    printf("Distance in inches - %.2f\n",km*39370.1);
    printf("Distance in feet - %.2f\n",km*3280.84);
    return 0;}
