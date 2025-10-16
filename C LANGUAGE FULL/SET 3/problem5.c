//PRINT THE TABLE OF 19
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d multiply by %d is : %d\n",n,i,n*i);
    }
    return 0;
}