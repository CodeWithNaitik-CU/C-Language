#include<stdio.h>
int main()
{
    int n,i;
    i = 1;
    printf("How many first natural numbers you want to be printed : ");
    scanf("%d",&n);
    do
    {
        printf("%d\n",i);
        i = i + 1;
    } while (i<=n);
    return 0;
}
