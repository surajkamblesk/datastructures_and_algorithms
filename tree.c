#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *right;
    struct tree *left;   
};

typedef struct tree *tree;

tree *insert_node(tree *root,int data)
{

}