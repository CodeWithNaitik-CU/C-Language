#include<stdio.h>
int main(int argc, char const *argv[])
{
    int km;
    printf("Enter the distance in kms..");
    scanf("%d",&km);
    printf("Distance in meters - %d\n",km/1000);
    printf("Distance in Centimeters - %d\n",km/100000);
    printf("Distance in inches - %d\n",km/39370.1);
    printf("Distance in feet - %d\n",km/3280.84);
    

    return 0;
}
