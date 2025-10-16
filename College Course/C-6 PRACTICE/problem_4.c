#include<stdio.h>
int fib(int x);
int main(){
    int x;
    printf("Enter the number till you want : ");
    scanf("%d",&x);
    printf("The value is : %d",fib(x));
    return 0;
}
int fib(int x){
    if (x == 1)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    
    
    return fib(x-1) + fib(x-2);
    
}