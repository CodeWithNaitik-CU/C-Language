#include<stdio.h>
int main()
{
    int a,b,c;
    float r,p,percent;
    printf("enter the marks in maths : ");
    scanf("%d",&a);

    printf("enter the marks in english : ");
    scanf("%d",&b);

    printf("enter the marks in science : ");
    scanf("%d",&c);


    p = a+b+c;
    r = p/300;
    percent = r*100;
    printf("Your percentage is %f\n",percent);

    if(a>33 && b>33 && c>33)
    
    
        if (percent>40)
        {
            printf("You are passed");
        }
        else
        {
           printf("You are failed");
        }
    else
    {
        printf("You not got enough marks to pass in subjects : ");
    }
    

    return 0;
}
