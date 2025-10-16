//FACTORIAL OF A NUMBER 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact = 1;
    
    
    while (n != 0)
    {
        fact =fact*n;
        n--;
    }
    printf("%d",fact);
    return 0;
}