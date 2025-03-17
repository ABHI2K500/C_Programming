#include<stdio.h>
int even(int);
int main(){
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  int result;
  result=even(num);
  if(result==0){
    printf("the given number is even");
  }
  else{
    printf("the given number is odd");
  }
}
int even(int n1){
  if(n1%2==0){
    return 0;
  }
  else{
    return 1;
  }
}
