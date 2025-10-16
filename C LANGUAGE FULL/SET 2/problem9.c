//GREATEST OF THREE
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    int b;
    printf("Enter the number : ");
    scanf("%d",&b);
    int c;
    printf("Enter the number : ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is greatest among all !!",a);
    }
    else if (b>c && b>a)
    {
        printf("%d is greatest among all !!",b);
    }
    else
    printf("%d is greatest among all !!",c);
    
    return 0;
}