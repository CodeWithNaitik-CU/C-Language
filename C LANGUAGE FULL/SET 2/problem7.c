//CHECK IF THE NUMBER IS 3 DIGIT OR NOT
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (n > 99 && n < 1000)
    {
        printf("Entered number is three digit number !!");
    }
    else if (n<0)
    {
        printf("Enter a positive number to check for !!");
    }
    else
    {
        printf("Entered number is not a three digit number !!");
    }
    return 0;
}