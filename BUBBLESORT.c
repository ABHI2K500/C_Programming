#include<stdio.h>
int main(){
  int limit;
  printf("Enter the number of elements in your array:");
  scanf("%d",&limit);
  int arr[limit];
  for(int i=0;i<limit;i=i+1){
    printf("\nenter the element");
    scanf("%d",&arr[i]);
  }
  for(int k=0;k<limit-1;k++){
    for(int j=0;j<limit-k-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  for(int r=0;r<limit;r=r+1){
    printf("%d",arr[r]);
  }
  return 0;
}
