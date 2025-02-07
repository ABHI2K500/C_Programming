/*
Author:Abhijith P
Date:07-02-2025
C Program to add two matrixes
*/
#include<stdio.h>
int main(){
  int row,column;
  printf("Enter the number of rows in your matrix's:");
  scanf("%d",&row);
  printf("Enter the number of column in your matrix's:");
  scanf("%d",&column);
  printf("Enter elements for first matrix");
  int matrix1[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  printf("Enter elements for second matrix");
  int matrix2[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      matrix1[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
