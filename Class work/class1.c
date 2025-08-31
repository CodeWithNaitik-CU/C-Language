//EVEN OR ODD CHECK
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number you wnt to check :");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("It is an even number !");
    }
    else
        printf("It is odd number !");
    
    return 0;
}
