//CHECK WHETHER THE POINTS LIE IN SAME LINE
// SLOPE1 = SLOPE2
#include<stdio.h>
int main(){
    int x1;
    printf("Enter the X coordinate of First point : ");
    scanf("%d",&x1);
    int y1;
    printf("Enter the Y coordinate of First point : ");
    scanf("%d",&y1);
    int x2;
    printf("Enter the X coordinate of Second point : ");
    scanf("%d",&x2);
    int y2;
    printf("Enter the Y coordinate of Second point : ");
    scanf("%d",&y2);
    int x3;
    printf("Enter the X coordinate of Third point : ");
    scanf("%d",&x3);
    int y3;
    printf("Enter the Y coordinate of Third point : ");
    scanf("%d",&y3);
    float slope1 = (y2-y1)/(x2-x1);
    float slope2 = (y3-y2)/(x3-x2);
    if (slope1==slope2)
    {
        printf("Points lie in the same line !!");
    }
    else
        printf("Points does not lie in the same line !!");
        
    return 0;
}