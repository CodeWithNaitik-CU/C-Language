// C PROGRAM TO CALCULATE AREA OF RECTANGLE 
#include <stdio.h>

int main()
{
    int length;
    printf("Enter the length :");
    scanf("%d",&length);
    int breadth;
    printf("Enter the Breadth :");
    scanf("%d",&breadth);
    int AREA ;
    AREA = length*breadth;
    printf("The area of the rectangle with given measurements is : %d",AREA);
    return 0;
}
