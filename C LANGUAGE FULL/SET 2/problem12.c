//GREATEST AMONG THREE USING NESTED CONDITIONAL STATEMENT
#include<stdio.h>
int main(){
    int a;
    printf("Enter first number : ");
    scanf("%d",&a);
    int b;
    printf("Enter second number : ");
    scanf("%d",&b);
    int c;
    printf("Enter third number : ");
    scanf("%d",&c);
    if (a<b&& b<c)
    {
        if (b>c && b>a)
        {
            printf("%d is the greatest among all !!",b);
        }
        else
        {
            printf("%d is the greatest among all !!",c);
        }
    }
    else{
        printf("%d is the greatest among all !!",c);
    }
    return 0;
}