#include<stdio.h>

int main(){

char a[100];

scanf("%[^\n]s",a);
for(int i=0;a[i]!='\0';i++){//helo or a[i] 2nd condition because Null
printf("%c",a[i]);
}

}