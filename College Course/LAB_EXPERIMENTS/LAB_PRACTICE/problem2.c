//DISTANCE BETWEEN TWO CITIES (IN KMS) IS INPUT BY THE USER.WRITE A PROGRAM TO CONVERT AND PRINT THIS DISTANCE IN METERS,FEET,INCHES AND CENTIMETERS
#include<stdio.h>
int main(){
    float n;
    printf("Enter the distance between the cities in kilometers : ");
    scanf("%f",&n);

    printf("distance in meters = %.2f\n",n*1000);
    printf("distance in centimeters = %.2f\n",n*100000);
    printf("distance in inches = %.2f\n",n*39370.1);
    printf("distance in feet = %.2f\n",n*3280.84);
    return 0;
}