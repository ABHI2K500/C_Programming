#include<stdio.h>
int main(){
  int number,product=1;
  printf("Enter a number to calculate its factorial:");
  scanf("%d",&number);
  while(number>0){
    product=number*product;
    number=number-1;
  }
  printf("factorial=%d",product);
}
