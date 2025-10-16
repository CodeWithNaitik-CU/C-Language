//DISPLAY SUM OF DIGITS OF THE NUMBER INPUT BY THE USER
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sum = 0;
    if (n == 0)
    {
        sum = 0;
    }
    else 
    {
        while (n != 0)
        {
            sum = sum + n%10;
            n = n/10;
        }
        
    }
    printf("SUM = %d",sum);
    


    return 0;
}