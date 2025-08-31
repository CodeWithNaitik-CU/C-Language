//CALCULATE THE VOLUME OF A CYLINDER
#include<stdio.h>

int main()
{
    float r,h,v;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    printf("Enter the Height : ");
    scanf("%f",&h);
    v = 3.1415*r*r*h;
    printf("The volume of the cylinder is %f ",v);
    return 0;
}
