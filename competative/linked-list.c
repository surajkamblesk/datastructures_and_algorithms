#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node{
  int data;
  struct node *next;
};

struct node* head = NULL;

void InsertFront(int data)
{
  struct node* newnode = (struct node*) malloc(sizeof(struct node));
  newnode->data = data;
  newnode-> next = head;
  head = newnode;
}

void DeleteFront()
{
  struct node* temp;
  temp = head;
  head = head->next;
  free(temp);
}

void DisplayList()
{
  struct node* temp;
  temp = head;
  while(temp->next != NULL)
  {
    printf("%d\n",temp->data);
    temp = temp->next;
  }
}

void main()
{
  int data,ch;
  while(1){
  printf("1. InsertFront 2. DeleteFront 3.DisplayList\n");
  scanf("%d",&ch);

  switch(ch){
    case 1:
    printf("enter data to insert\n");
    scanf("%d",&data);
    InsertFront(data);
    break;

    case 2:
    DeleteFront();
    break;

    case 3:
    DisplayList();
    break;
  }
}
}
