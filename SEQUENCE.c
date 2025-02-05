#include<stdio.h>
int main(){
  int limit,finder,checker=0,index;
  printf("Enter the number of elements in your array:");
  scanf("%d",&limit);
  int arr[limit];
  for(int i=0;i<limit;i=i+1){
    printf("\nenter the element");
    scanf("%d",&arr[i]);
  }
  printf("\nenter the element to search for in the array:");
  scanf("%d",&finder);
  for(int f=0;f<limit;f=f+1){
    if(arr[f]==finder){
      index=f;
      printf("the given number is in the array with its index position being:%d",index);
      break;
        
    }
    else{
      checker=checker+1;
    }
  }
  if(checker>0){
    printf("the given element is not in the array");
  }
  
}
