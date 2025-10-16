//Remainder finder 
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number which is divided : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number which divides %d : ",a);
    scanf("%d",&b);
    printf("The remainder is : %d",a % b);
    return 0;
}