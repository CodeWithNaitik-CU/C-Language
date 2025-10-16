//SUM OF EVEN DIGIS OF THE NUMBER 
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
            if ((n%10)%2 == 0)
            {
                sum = sum + n % 10;
            }
            n = n/10;
        }
    }
    printf("Sum = %d",sum);
    return 0;
}