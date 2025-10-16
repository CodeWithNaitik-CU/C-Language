#include<stdio.h>

int main()
{
    int tax;
    printf("Enter the tax paid by u : ");
    scanf("%d",&tax);
    if (tax>=1000000)
    {
        printf("30%%");
    }
    else if (500000<=tax && tax<1000000)
    {
        printf("20%%");
    }
    else if (tax<500000 && tax>=250000)
    {
        printf("5%%");
    }
    else
    {
        printf("No tax...!");
    }
    
    
    return 0;
}
