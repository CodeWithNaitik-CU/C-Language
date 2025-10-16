//CHECK THE YOUNGEST OF THREE
#include<stdio.h>
int main(){
    int ram;
    printf("Enter the age of Ram : ");
    scanf("%d",&ram);
    int shyam;
    printf("Enter the age of Shyam : ");
    scanf("%d",&shyam);
    int ajay;
    printf("Enter the age of Ajay : ");
    scanf("%d",&ajay);
    if (ram<shyam && ram<ajay)
    {
        printf("Ram is the youngest among them !!");
    }
    else if (shyam<ram && shyam<ajay)
    {
        printf("Shyam is the youngest among them !!");
    }
    else
    {
        printf("Ajay is the youngest among them !!");
    }
    
    return 0;
}