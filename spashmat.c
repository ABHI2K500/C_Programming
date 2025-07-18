#include<stdio.h>
int main(){
  int row,column;
  printf("Enter the number of rows in your matrix's:");
  scanf("%d",&row);
  printf("Enter the number of column in your matrix's:");
  scanf("%d",&column);
  printf("Enter elements for first matrix:\n");
  int matrix1[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  printf("Enter elements for second matrix:\n");
  int matrix2[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  int matrix3[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  int matrix4[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        matrix4[i][j]=matrix3[j][i];
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
  }
  printf("*******************\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix4[i][j]);
    }
    printf("\n");
  }

  return 0;
}