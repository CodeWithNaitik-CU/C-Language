//AREA OF THE CIRCLE
#include<stdio.h>
int main()
{
    float r;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("The area of circle is : %.2f",area);
    return 0;
}