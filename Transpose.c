/*
Author:Abhijith P
Date:07-02-2025
C Program to Transpose a matrix
*/
#include<stdio.h>
int main(){
  int row,column;
  printf("Enter the number of rows in your matrix's:");
  scanf("%d",&row);
  printf("Enter the number of column in your matrix's:");
  scanf("%d",&column);
  printf("Enter elements for matrix");
  int matrix1[row][column];
  int matrix2[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      matrix2[i][j]=matrix1[j][i];
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
  }
}
  
