#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

typedef struct node *NODE;

 NODE first = NULL;
NODE Insert_front(NODE first,int item)
{
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp ->info = item;
    temp ->link = first;
    return temp;
}

NODE insert_rear(NODE first,int item)
{
    NODE temp,cur;
    temp = (NODE) malloc(sizeof(struct node));
    temp ->info = item;
    temp -> link = NULL;
    if(first==NULL){
        return temp;
    }
    cur = first;
    while(cur ->link !=NULL){
        cur = cur ->link;
    }
    cur ->link = temp;
    return first;

}

NODE delete_front(NODE first)
{
    NODE temp;
    temp = first;
    if(first == NULL){
        printf("list empty\n");
        return NULL;
    }
    first = first->link;
    printf("deleted element :%d\n",temp->info);
    free(temp);
    return first;
}

NODE delete_rear(NODE first)
{
    NODE cur,prev;
    if(first == NULL){
        printf("list empty \n");
        return NULL;
    }
    cur = first;
    prev = NULL;
    while(cur -> link != NULL)
    {
        prev = cur;
        cur = cur -> link;
    }
    prev->link = NULL;
    printf("element deleted is %d\n",cur->info);
    free(cur);
    return first;
}

void display(NODE first)
{
    NODE temp;
    if(first == NULL)
    {
        printf("list empty\n");
    }
    else{
        printf("list content is \n");
        temp = first;
        while(temp != NULL)
        {
            printf("%d \t",temp->info);
          
            temp = temp ->link;
        }
    }
}

int menu(){
    int ch;
    printf("\n1.insert front\n2.insert rear\n3.delete front\n4.delete rear\n5.display list\n");
    printf("enter choice\n");
    scanf("%d",&ch);
 return ch;   
}

int input()
{
    int ele;
    printf("enter element to insert\n");
    scanf("%d",&ele);
    return ele;
}


int main()
{
   
    int item;
    while(1){
    switch(menu())
    {
        case 1:
        printf("insert front\n");
      first =  Insert_front(first,input());
       break;

       case 2:
       printf("insert rear\n");
     first =  insert_rear(first,input());
       break;

       case 3:
       printf("delete front\n");
     first =  delete_front(first);
       break;

       case 4:
       printf("delete rear\n");
     first =  delete_rear(first);
       break;

       case 5:
       printf("display list\n");
       display(first);

       case 6:
       system("clear");
       break;

    }
}
}