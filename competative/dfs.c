#include<stdio.h>
#include<stdlib.h>
int count =0;
#define size 10
void dfs(int graph[][size],int visit[],int n,int start)
{
    visit[start]=1;
    int i;
    printf("%d\n",start);
    for(i=0;i<n;i++){
        if(graph[start][i]==1 && visit[i]==0){
            dfs(graph,visit,n,i);
        }
    }
}

int main()
{
    int graph[size][size],n,i,j,visit[size];
    printf("enter number of vertices\n");
    scanf("%d",&n);
    printf("enter adjucency matrix\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }

    printf("the adjuccency matrix is \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("%d",graph[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
        visit[i]=0;

    for(i=0;i<n;i++){
    if(visit[i]==0){
        dfs(graph,visit,n,i);
        count++;
    }
    }

    if(count==1){printf("graph isconnected\n");}
    else{
        printf("not connected\n");
    }

    
}