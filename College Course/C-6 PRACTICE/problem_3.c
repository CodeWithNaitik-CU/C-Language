// Write a function to calculate force of attraction on a body by earth
#include<stdio.h>
float force(float m);

int main(){
    float mass;
    printf("Enter the mass in kilograms : ");
    scanf("%f",&mass);
    force(mass);

    return 0;
}
float force(float m){
    float force = 9.8*m;
    printf("THe force of attraction is : %.2f",force);


}