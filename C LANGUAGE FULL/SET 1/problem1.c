//VOLUME OF A SPHERE 
#include<stdio.h>
int main(){
    float r;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    float v = 1.333*3.14*r*r*r;
    printf("The volume of the sphere with radius %.2f is : %.2f",r,v); 
    return 0;
}