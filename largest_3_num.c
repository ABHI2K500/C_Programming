#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("\nEnter second number:");
  scanf("%d",&num2);
  printf("\nEnter third number:");
  scanf("%d",&num3);
  if(num1>num2){
    if(num1>num3){
      printf("greatest number is:%d",num1);
    }
  }
  else if(num2>num3){
    if(num2>num1){
      printf("greatest number is:%d",num2);
    }
  }
  else if(num3>num1){
    if(num3>num2){
      printf("greatest number is:%d",num3);
    }
  }
  else{
    printf("some of the entered numbers are equal");
  }
  return 0;
}
    
