//CHECK FOR ODD OR EVEN
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number to check if it is odd or even : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("Entered number is even !!");
    }
    else if(n % 2 != 0){
        printf("Entered number is odd !!");
    }
    else{
        printf("You entered something wrong...please enter a valid number !!");
    }
    return 0;
}