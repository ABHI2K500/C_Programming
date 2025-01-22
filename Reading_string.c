#include<stdio.h>
int main(){
  char Name[20];
  printf("\nEnter your name:");
  fgets(Name,sizeof(Name),stdin);
  printf("hello %s",Name);
  return 0;
}
