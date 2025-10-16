#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",year);
    year % 4 == 0?printf("Yes it is a leap year"):printf("No it is not a leap year");
    return 0;}
