//Electricity Bill calculator 
#include<stdio.h>
int main()
{
    float units = 600;
    float sum = 0;
    if (units>=100)
    {
        sum = sum + 1;
        if (units>=300)
        {
            sum = sum + 1.5;
            if (units>=600)
            {
                sum = sum + 2;
            }
            
        }
        
    }
    printf("The charge is %.2f",sum);


    return 0;
}