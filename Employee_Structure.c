/*
Author:ABHIJITH P
Date:02-04-2025
A program to store and print data of employees in a structure
*/
	
#include<stdio.h>
struct employee{
  char name[10];
  int em_id;
  float salary;
};
int main(){
  int no_of_employee;
  printf("enter the number of employees");
  scanf("%d",&no_of_employee);
  struct employee e[no_of_employee];
  for(int i=0;i<no_of_employee;i++){
    printf("Enter Employee ID:\n");
    scanf("%d",&e[i].em_id);
    printf("Enter Employee name:\n");
    scanf("%s",&e[i].name);
    printf("Enter the income of the employee:\n");
    scanf("%f",&e[i].salary);
  }
  for(int i=0;i<no_of_employee;i++){
    printf("Enter Employee name:%s\n",e[i].name);
    printf("Enter Employee ID:%d\n",e[i].em_id);
    printf("Enter the income of the employee:%f\n",e[i].salary);
  }
}
