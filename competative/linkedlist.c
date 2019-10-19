#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
  
    struct node *next;
};
typedef struct node *node;

struct node insertfront( struct node start,int item)
{
   struct  node newnode;
    newnode = (node)malloc(sizeof(struct node));
    if(start==NULL)
    {
        
    }
}