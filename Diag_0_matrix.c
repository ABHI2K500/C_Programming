#include<stdio.h>
int main(){
  int row,column;
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
  for(int l=0;l<row;l++){
    for(int m=0;m<column;m++){
      if(l==m){
        matrix[l][m]=0;
      }
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
}
