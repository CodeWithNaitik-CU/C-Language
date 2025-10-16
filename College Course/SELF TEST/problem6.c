//SUM OF FIRST N NATURAL NUMBERS 
#include<stdio.h>
int main(){
    int i = 1;
    int n;
    int sum = 0;
    printf("Enter the number upto which you want to add : ");
    scanf("%d",&n);
    do
    {
        sum = i + sum;
        i++;

    } while (n>=i);
        printf("sum : %d",sum);
    
    return 0;
}