//PERCENTAGE FINDER FROM 5 SUBJECTS
#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Enter the marks in subject 1 : ");
    scanf("%f",&a);
    printf("Enter the marks in subject 2 : ");
    scanf("%f",&b);
    printf("Enter the marks in subject 3 : ");
    scanf("%f",&c);
    printf("Enter the marks in subject 4 : ");
    scanf("%f",&d);
    printf("Enter the marks in subject 5 : ");
    scanf("%f",&e);

    float percent = (a+b+c+d+e)/5;
    printf("Percentage : %.2f",percent);

    return 0;
}