// CHECK WHETHER BTHE NUMBER IS PRIME OR NOT 
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number to check for : ");
	scanf("%d",&n);
	int not_prime;
    if (n = 2) {
        printf("Entered number is prime..!!\n");
        return 0;}
	for(int i = 2 ; i<n ; i++){
		if(n%i==0){
		not_prime = 1;
        break;
		}
        else
        not_prime = 0;
		}
	if(not_prime)
	{
	printf("Entered number is not prime..!!");
	}
	else
	{
	printf("Entered number is prime..!!");

	}
	return 0;
	}