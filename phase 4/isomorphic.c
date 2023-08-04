#include<stdio.h>

int main(){

char a[100],b[100];
char en[26]={'\0'};
printf("Enter the string : ");
scanf("%s %s",a,b);
for(int i=0;a[i];i++){
en[a[i]-97]=b[i];

}
for(int i=0;i<26;i++){
printf("%d - %c\n",i,en[i]);

}

}