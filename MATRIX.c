#include<stdio.h>
int main(){
  int row,column,sum=0;
  printf("Enter the number of rows in your matrix");
  scanf("%d",&row);
  printf("Enter the number of column in your matrix");
  scanf("%d",&column);
  int matrix[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
}
