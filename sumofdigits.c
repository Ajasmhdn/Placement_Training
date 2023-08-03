#include<stdio.h>

int main(){

int n,sum=0,r;//not intialized to 0 the sum it will return the garbage value.

 printf("Enter the number:\n");
    scanf("%d",&n);
    while(n>0){
    r=n%10;
    sum+=r;
    n=n/10;
    }

printf("The sum is %d: \n",sum);


//continue next iteration break Exit loop
}