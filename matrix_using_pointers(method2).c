#include<stdio.h>
#include<stdlib.h>
int main(){
  int row,col;
  printf("enter the rows and col for the array:");
  scanf("%d%d",&row,&col);
  int *arr=(int *)malloc(row*col*sizeof(int *));
  printf("\nenter the elements for the array");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",(arr+i*col+j));
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("\t%d",*(arr+i*col+j));
    }
    printf("\n");
  }
 
}
