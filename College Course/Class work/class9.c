//GRADE DECLARATION
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the marks in maths");
    scanf("%f",a);
    printf("Enter the marks in english");
    scanf("%f",b);
    printf("Enter the marks in chemistry");
    scanf("%f",c);
    printf("Enter the marks in physics");
    scanf("%f",d);
    printf("Enter the marks in computer");
    scanf("%f",e);
    float av = a+b+c+d+e;
    float average = av/500;
    float percent = average*100;
    if (percent>=90)
    {
        printf("Congrats you scored A grade !!");
    }
    else if (percent>=80 && percent<90)
    {
        printf("Congrats you scored B grade !!");
    }
    else if (percent>=70 && percent<80)
    {
        printf("Congrats you scored C grade !!");
    }
    else if (percent>=60 && percent<70)
    {
        printf("Congrats you scored D grade !!");
    }
    else if (percent>=0 && percent<50)
    {
        printf("you are failed try next time harder !!");
    }
    else
        printf("Congrats...You are passed !!");
    return 0;
}
