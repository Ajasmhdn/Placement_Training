#include <stdio.h>

int main()
{

    int a;
      printf("Enter the Year:\n");
    scanf("%d",&a);

if(a%400==0){
    printf("the Year %d is leap year \n",a);
}

else if(a%100==0){
  printf("the Year %d is not leap year \n",a);

}


 else if(a%4==0){
     printf("the Year %d is leap year \n",a);

}
else{
 printf("the Year %d is not leap year \n",a);

}


}





