//PRINT ABSOLUTE VALUE
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("ABSOLUTE VALUE = %d",-1*n);
    }
    else
    printf("The number %d is already absolute !!",n);
    
    return 0;
}