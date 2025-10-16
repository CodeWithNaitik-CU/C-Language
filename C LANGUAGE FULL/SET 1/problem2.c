//AREA OF CIRCLE
#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("The area of the circle with radius %.2f is : %.2f",r,area);
    return 0;
}