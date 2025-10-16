//CHECK IF TRIANGLE EXISTS
#include<stdio.h>
int main(){
    int a;
    printf("Enter first side of the triangle : ");
    scanf("%d",&a);
    int b;
    printf("Enter second side of the triangle : ");
    scanf("%d",&b);
    int c;
    printf("Enter third side of the triangle : ");
    scanf("%d",&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("Triangle exists...!!");
    }
    else{
        printf("Triangle does not exists...!!");
    }
    return 0;
}