//PROFIT OR LOSS
#include<stdio.h>
int main()
{
    float cp;
    printf("Enter the Cost price : ");
    scanf("%f",&cp);
    float sp;
    printf("Enter the Sell price : ");
    scanf("%f",&sp);
    if (cp>sp)
    {
        printf("It's a loss of %.2f",cp-sp);
    }
    else if(cp<sp)
    {
        printf("It's a profit of %.2f",sp-cp);
    }
    else{
        printf("It's a no profit no loss deal !!");
    }
    return 0;
}