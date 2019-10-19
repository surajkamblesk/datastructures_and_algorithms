#include<stdio.h>
#include<stdlib.h>
#define size 20

typedef struct{
    int a[size];
    int top;
} stack;

void push(stack *s,int ele){
    if(s->top== size-1){
        printf("overflow\n");
        exit(0);
    }
    
}