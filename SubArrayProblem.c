#include<stdio.h>
#include<stdlib.h>
int SubArrayProblem(int n , int arr[], int sum);

void main()
{
    int n,arr[50],i,j,sum;
    printf("enter n\n");
    scanf("%d",&n);
    printf("\nenter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nenter the sum");
    scanf("%d",&sum);
    SubArrayProblem(n,arr,sum);
}

int SubArrayProblem(int n,int arr[], int sum)
{
    int cur_sum,i,j;
    for(i=0;i<n;i++)
    {
        cur_sum = arr[i];
        for(j=i+1;j<=n;j++)
        {
            if(cur_sum == sum )
            {
                printf("\nsum found at %d and %d",i,j-1);
                return 1;
               
            }
            if(cur_sum > sum || j==n)
            break;
            cur_sum += arr[j];
        }
    }
    printf("\nSum not found");
    return 0;

}