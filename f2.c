#include<stdio.h>
#include<stdlib.h>
int main(){
  int *array;
  int n;
  printf("Enter the number of elements in your array");
  scanf("%d",&n);
  array=(int *) calloc(n,sizeof(int));
  printf("\nenter the elements for the array:");
  for(int i=0;i<n;i++){
    scanf("%d",array+i);
  }
  for(int i=0;i<n;i++){
    printf("%d",*(array+i));
  }
  return 0;
}
