#include<stdio.h>
#include<stdlib.h>
int count=0;
void dfs(int mat[50][50],int start,int visited[],int n)
{
	int i,j;
	visited[start]=1;
	printf("\n");
	printf("%d \t",start);
	for(i=0;i<n;i++)
	{
		if(mat[start][i]==1 && visited[i] ==0){
			dfs(mat,i,visited,n);
		}
	}
}

int main()
{
	int i,j,mat[50][50];

	int n,start;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	int visited[n];

	printf("enter adjucency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}

	for(i=0;i<n;i++)
		visited[i] = 0;

	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
			printf("traversal for component %d\n",count+1);
			dfs(mat,i,visited,n);
			count++;
			printf("\n");
		}
	}

if(count ==1){
	printf("connected graph\n");
}else{
	printf("\n not connected graph, no of components: %d\n",count);
}



}
