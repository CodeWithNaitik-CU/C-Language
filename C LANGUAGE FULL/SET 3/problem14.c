//WAP TO COUNT NUMBER OF DIGITS OF A GIVEN NUMBER 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to check for : ");
    scanf("%d",&n);
    int count = 0;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            n = n/10;
            count++;
        }
        
    }
    printf("It is a %d digit number..!!",count);
    return 0;
}