#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
void main(){
    int i,j,sum1 = 0 , sum2 = 0;
    int arr[20][20],n;

    printf("enter size");
    scanf("%d",&n);

    printf("enter the matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&arr[i][j]);

    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(i==j){
    sum1 = sum1+arr[i][j];
    sum2 = sum2+arr[i][n-1-j];
    }
    }
    }
    printf("sum1 = %d\n",sum1);
    printf("sum2 = %d\n",sum2);
    int tot = abs(sum1 + sum2);
    printf("%d\n",tot);

}