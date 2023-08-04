#include<stdio.h>

int main(){

char a[100];
scanf("%s",a);
scanf("%[^\n]s",a);
scanf("%[A-Za-z0-9]s",a);
gets(a);
fgets(a,14,stdin);
printf("%s",a);




}