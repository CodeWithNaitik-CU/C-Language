//PROGRAM TO PRINT REVERSE 0F THE NUMBER INPUT BY THE USER
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int reverse = 0;
    int count = 0;

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        while (n != 0)
        {
            count = n%10;
            reverse = reverse*10 + count;
            n = n/10;
        }
        
    }
    printf("%d",reverse);
    return 0;
}