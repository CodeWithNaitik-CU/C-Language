// Calculate factorial using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to find factorial : ");
    scanf("%d", &n);
    int i = 1;
    int product = 1;
    while(i<=n){
        product = product*i;
        i++;

    }
    printf("The factorial is : %d",product);
    
    return 0;
}
