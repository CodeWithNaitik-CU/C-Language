//PRINT SUM AND REVERSE
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    int reverse = 0;
    int count = 0;
    if(n == 0){
        sum = 0;
    }
    else
    {
        while(n != 0)
        {
            sum = sum + n%10;
            count = n%10;
            reverse = reverse*10 + count;
            n = n/10;
        }
    }
    printf("SUM = %d REVERSE = %d",sum,reverse);
    return 0;
}