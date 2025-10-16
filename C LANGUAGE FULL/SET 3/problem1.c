//PRINT HELLO 'n' TIMES
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of times to repeat 'Hello' : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++)
    {
        printf("Helloo...!!\n");
    }
    return 0;
}