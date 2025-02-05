#include<stdio.h>
int main(){
  int limit,max,min;
  printf("Enter the number of elements in your array:");
  scanf("%d",&limit);
  int arr[limit];
  for(int i=0;i<limit;i=i+1){
    printf("\nenter the element");
    scanf("%d",&arr[i]);
  max=arr[0];
  min=arr[0];
  }
  for(int f=0;f<limit;f=f+1){
    if(arr[f]<=min){
      min=arr[f];
    }
  }
  for(int f=0;f<limit;f=f+1){
    if(arr[f]>=max){
      max=arr[f];
    }
  }
  printf("maximum=%d",max);
  printf("minimum=%d",min);
}
