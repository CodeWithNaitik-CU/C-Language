//DISPLAY THE AP
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number till which you want to display AP : ");
    scanf("%d",&n);
    for (int i = 1; i <=2*n-1 ; i = i + 2)
    {
        printf("%d ",i);
    }
    
    return 0;
}