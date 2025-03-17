#include<stdio.h>
int multiple(int n1,int n2);
int main(){
  int num1,num2;
  printf("enter 1st number and 2nd number");
  scanf("%d%d",&num1,&num2);
  int result;
  result=multiple(num1,num2);
  printf("%d",result);
}
int multiple(int n1,int n2){
  int product=n1*n2;
  return product;
}

