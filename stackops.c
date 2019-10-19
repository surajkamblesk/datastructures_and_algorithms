#include<stdio.h>
#include<stdlib.h>
#define size 30
struct stack{
    int top ;
    int arr[size];
};

 struct stack s;
 

int pop(struct stack s){



}

void push(int item, struct stack &){

}

int main(){
    int n,item,ch;
    printf("enter the size the array\n");
    scanf("%d",&n);

    

    while(1){
        printf("1.push \n2.pop \n3.display\n");
        printf("enter choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1: 
            printf("enter the item to insert\n");
               scanf("%d",&item);
               push(item);
               break;
               case 2:
               printf("the deleted item is : %d\n",pop(s));
               break;
               case 3:
               display();
               break;
        
        default:
        printf("invalid input enterd\n");
        }
    }


}