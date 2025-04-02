#include<stdio.h>
struct student{
  int rollno;
  char name[10];
  float cgpa;
};
int main(){
  struct student s1;
  printf("Enter the roll number of the student:\n");
  scanf("%d",&s1.rollno);
  printf("Enter the name of the student:\n");
  scanf("%s",&s1.name);
  printf("Enter the cgpa of the student:\n");
  scanf("%f",&s1.cgpa);
  printf("Name:%s\n",s1.name);
  printf("Roll number:%d\n",s1.rollno);
  printf("CGPA:%f\n",s1.cgpa);
}
