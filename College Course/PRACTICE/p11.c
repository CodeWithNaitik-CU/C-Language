//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The number entered is even..!!");
    }
    else if(a%2!=0){
        printf("The entered number is odd...!!");
    }
    else{
        printf("Wrong number entered...!!");
    }
    
    return 0;
}
