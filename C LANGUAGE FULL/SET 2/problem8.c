//CHECK DIVISIBILITY BY 5 AND 3
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to check for : ");
    scanf("%d",&n);
    if (n%3==0 || n%5==0)
    {
        if (n%3==0 && n%5==0)
        {
            printf("%d is divisible by both 5 and 3",n);
        }
        else if (n%3==0 && n%5!=0)
        {
            printf("%d is divisible by 3 and not by 5",n);
        }
        else
        printf("%d is divisible by 5 and not by 3",n);
    }
    else{
        printf("%d is not divisible by both 5 and 3",n);
    }
    return 0;
}