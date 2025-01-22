#include<stdio.h>
#include<ctype.h>
int main(){
  char value;
  printf("Enter the character");
  value=getchar();
  char lowered=tolower(value);
  printf("%c",lowered);
  return 0;
}
