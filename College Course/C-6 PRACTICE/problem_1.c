//Average of three numbers using functions
#include<stdio.h>
int average(int a,int b,int c);
int main(){
    int a,b,c;
    a = 10;
    b = 24;
    c = 18;
    average(a,b,c);
}
int average(int a,int b,int c){
    int average = (a+b+c)/3;
    printf("The average is : %d",average);
    return (a+b+c)/3;
}