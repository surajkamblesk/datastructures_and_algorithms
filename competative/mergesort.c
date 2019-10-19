#include<stdio.h>
#include<stdlib.h>
#define max 2000
int count = 0;
void mergesort(int[],int,int);
void merge(int[],int,int,int);
int main(){
    int a[max],b[max],c[max],c1,c2,c3,n,i,j;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the sorted list is\n");
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
       

    }
     printf("count is : %d\n",count);
    for(i=16;i<2000;i=i*2)
    {
        for(j=0;j<i;j++){
            a[j]=j;
            b[j]=i-j;
            c[j]= rand()%i;
        }
        count =0;
    mergesort(a,0,i-1);
    c1=count;
    count = 0;
    mergesort(b,0,i-1);
    c2=count;
    count =0;
    mergesort(c,0,i-1);
    c3=count;
    printf("\n%d\t%d\t%d\t%d",i,c1,c2,c3);
    }
    return 0;
}
void mergesort(int a[],int left,int right){
   if(left<right){
       int mid = (left+right)/2;
       mergesort(a,left,mid);
       mergesort(a,mid+1,right);
       merge(a,left,right,mid);
   }
}

void merge(int a[],int left,int right,int mid){
    int i = left;
    int j=mid+1;
    int k=left;
    int b[max];
    while(i<=mid && j <= right){
        if(a[i]<a[j]){
            b[k++]=a[i++];
            count++;
        }
        else{
            b[k++]=a[j++];
            count++;
        }

    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=right){
        b[k++]=a[j++];
    }
    for(k=left;k<=right;k++){
        a[k]=b[k];
    }
}