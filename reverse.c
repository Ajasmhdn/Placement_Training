#include<stdio.h>

int main(){

int n,rev=0,r;
 printf("Enter the number:\n");
    scanf("%d",&n);
    while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }

printf("The rev is %d: \n",rev);



}