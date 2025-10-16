//CHECK IF AREA>PERIMETER OF A RECTANGLE
#include<stdio.h>
int main(){
    float l;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&l);
    float b;
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&b);
    float area = l*b;
    float perimeter = 2*(l+b);
    if(area>perimeter)
    {
        printf("Area is greater than perimeter of the rectangle !!");
    }
    else if (area<perimeter)
    {
        printf("Perimeter is greater than Area of the rectangle !!");
    }
    else
    {
        printf("Area of the rectangle is equal to the perimeter of the rectangle !!");
    }

    return 0;
}