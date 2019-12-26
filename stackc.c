#include<stdio.h>
#include<stdlib.h>
#define size 10

struct stack{
    int top;
    int data[size];
};

void push(int item,struct stack *s)
{
   if(s->top == size - 1)
   {
       printf("stack overflow");
       exit(0);
   }
   else{
       s->data[++s->top] = item;
   }
}

int pop(struct stack *s)
{
    
    if(s->top == -1)
    {
        printf("stack underflow\n");
        return -1;
    }
    else{
        return s->data[s->top--];
    }
}

void display(struct stack *s)
{
    int i;
    for(i=s->top;i!=-1;i--)
    {
        printf("%d\n",s->data[i]);
    }
}

int DisplayMenu()
{
    printf("\n1. push\n2. pop\n3.display\n");
    int ch;
    scanf("%d",&ch);
    return ch;
}


int main()
{
 struct stack *s;
 s->top = -1;
    int data;
    while(1)
    {
        switch(DisplayMenu())
        {
            case 1:
            printf("enter data to push");
            scanf("%d",&data);
            push(data,s);
            break;
            case 2:
            printf("popped data : %d\n",pop(s));
            break;
            case 3:
            display(s);
            break;

            default:
            printf("invalid entry");
        }
    }

}