//PROGRAM TO CHECK PRIME OR NOT
#include<stdio.h>
int main(){
    int isprime = 1;
    int n;
    printf("Enter the number to check for : ");
    scanf("%d",&n);
    
    if (n == 0 || n == 1)
    {
        isprime = 0;
    }
    else{
        for (int i = 2; i <= n/2; i++)
        {
            isprime = 0;
        }
        
    }
    if (isprime == 0)
    {
        printf("Number is not Prime !!");
    }
    else
    {
        printf("Number is Prime !!");
    }
    
    return 0;
}