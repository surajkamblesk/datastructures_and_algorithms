#include<stdio.h>
#include<stdlib.h>
#define MAX 2000
void quicksort(int a[],int left,int right);
int  partition(int a[],int left,int right);
void swap(int *a,int *b);
int count=0;
int main()
{
   int a[MAX],b[MAX],c[MAX],i,j,c1 = 0,c2 = 0,c3 = 0,n;
printf("Enter the number of elements:\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements:");
for(i = 0; i < n; i++)
scanf("%d",&arr[i]);
printf("The sorted array is:\n");
quicksort(arr,0,n-1);
for(i = 0; i < n; i++)
printf("%d ",arr[i]);
printf("\nThe count is:%d\n",count);
for(i = 16; i < 2000; i = i*2)
{
for(j = 0; j < i; j++)
{
a[j] = j;
b[j] = i-j;
c[j] = rand() % i;
}
count = 0;
quicksort(a,0,i-1);
c1 = count;
count = 0;
quicksort(b,0,i-1);c2 = count;
count = 0;
quicksort(c,0,i-1);
c3 = count;
printf("\n%d\t%d\t%d\t%d\n",i,c1,c2,c3);
}
return 0;

}
void quicksort(int a[],int left,int right){
    if(left<right)
    {
        int s = partition(a,left,right);
        quicksort(a,left,s-1);
        quicksort(a,s+1,right);


    }
}

int partition(int a[],int left,int right){
    int i=left+1;
    int j=right;
    int pivot= a[left];
    while(1){
        while(pivot >= a[i] && i<= right){
            i++;
            count++;
        }
        while(pivot < a[j])
        {
            j--;
            count++;

        }
        count++;
        if(i<j)
        swap(&a[i],&a[j]);
        else{
            swap(&a[left],&a[j]);
            return j;
        }
    }
}



void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}