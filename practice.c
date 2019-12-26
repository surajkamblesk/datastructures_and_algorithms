#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * temp;

struct node *InsertFront(struct node *start, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = start;
    start = newnode;
    return start;
}

struct node *InsertRear(struct node *start, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (start == NULL)
    {
        printf("no nodes present , empty list\n");
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
    return start;
}

void display(struct node *start)
{
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {

        printf("\t| %d |\t", temp->data);
        printf("-");
        temp = temp->next;
    }
}

struct node *DeleteFront(struct node *start)
{
    struct node *temp;
    if (start == NULL)
    {
        printf("the list is empty\n");
    }
    else
    {
        temp = start;
        start = start->next;
        free(temp);
    }

    return start;
}

struct node* DeleteRear(struct node* start)
{
    struct node* temp, *prev;
    if(start == NULL){
        printf("nothing to delete\n");
    }
    else{
       temp = start;
       prev = start;
        while(temp =! NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;

    }
    free(temp);
}

int LenghtOfList(struct node *start)
{
    struct node *temp;
    int lenght = 0;
    if (start = NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("before %d\n", lenght);
            lenght = lenght + 1;
            printf("after %d\n", lenght);
            temp = temp->next;
        }
    }
    return lenght;
}



void main()
{
    int ch, data;
    struct node *start = NULL;
    while (1)
    {
        printf("\n\n1. display \n2. Insert front\n3. Insert Rear\n4. delete rear \n 5. delete front\n 6. lentgh of list\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("The content : ");
            display(start);
            break;

        case 2:
            printf("enter the data to insert\n");
            scanf("%d", &data);
            start = InsertFront(start, data);
            break;
        case 3:
            printf("enter the data to insert\n");
            scanf("%d", &data);
            start = InsertRear(start, data);
            break;
        case 4:
            DeleteRear(start);
            break;
        case 5:
            start = DeleteFront(start);
            break;

        case 6:
            printf("lenght of the list : %d\n", LenghtOfList(start));
            break;
        }
    }
}