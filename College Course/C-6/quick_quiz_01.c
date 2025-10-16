#include<stdio.h>
float area(float x);

int main(){
    float a;
    printf("Enter the measurement of side : ");
    scanf("%f",&a);
    area(a);
    return 0;
}

float area(float x){
    float area = x*x; 
    printf("The Area of square is : %.2f\n",area);
    return x*x;
}