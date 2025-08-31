//CHECK WHETHER GIVEN NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to check for : ");
    scanf("%d",&a);
    int i;
    i = 2;
    for (i = 2; i < a/2; i++)
    {
        if (a % i == 0)
        {
            printf("Number entered is not prime !!");
            break;
        }
        else
        {
            printf("Number entered is prime !!");
            break;
        }
        
        
    }
    
    
    

    return 0;
}
