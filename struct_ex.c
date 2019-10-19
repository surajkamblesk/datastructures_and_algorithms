#include<stdio.h>
#include<stdlib.h>

struct student{
  char name[50];
  int age;
};

int main()
{
  struct student s[20];
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("enter student name\n");
    scanf("%s",&s[i].name);
    printf("enter student age\n");
    scanf("%d",s[i].age);
  }
  printf("student details\n");
  printf("name\t\t\t\tage\n");
  for(i=0;i<n-1;i++)
  {
    printf("%d\t\t\t%d",s[i].name,s[i].age);
  }
}
