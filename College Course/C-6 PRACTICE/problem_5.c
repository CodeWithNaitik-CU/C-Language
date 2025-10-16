//SUM OF FORST N NATURAL NUMBERS
#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of the number till %d is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    return n + sum(n-1);
}
