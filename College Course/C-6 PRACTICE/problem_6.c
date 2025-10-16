//PRINT THE PATTERN 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines you want to print for :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}