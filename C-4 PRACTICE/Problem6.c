//WRITE A PROGRAM TO FIND GREATEST OF FOUR
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("ENTER FIRST INTEGER : ");
    scanf("%d",&a);
    printf("ENTER SECOND INTEGER : ");
    scanf("%d",&b);
    printf("ENTER THIRD INTEGER : ");
    scanf("%d",&c);
    printf("ENTER FOURTH INTEGER : ");
    scanf("%d",&d);
    if (a>b && a>c && a>d){
        printf("First number is greatest !!");}
    else if (b>a && b>c && b>d){
        printf("Second number is greatest !!");}
    else if (c>a && c>b && c>d){
        printf("Third number is greatest !!");}
    else{
        printf("Fourth number is greatest !!");}
    return 0;}
