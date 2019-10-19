#include<stdio.h>
#include<stdlib.h>

void multiply(int mat1[50][50],int mat2[50][50],int n)
{

int i,j;
int result_mat[50][50];

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		result_mat[i][j] = mat1[i][j] * mat2[i][j];
	}
}

printf("the final matrix is \n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",result_mat[i][j]);
	}
	printf("\n");
}
}
int main()
{
int n,i,j;
int mat1[50][50];
int mat2[50][50];

printf("enter the matrix order\n");
	scanf("%d",&n);

printf("enter the first matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}

printf("enter the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
		printf("\n");
	}


printf("the matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",mat1[i][j]);
		}
		printf("\n");

	}


printf("the second matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}



multiply(mat1,mat2,n);

		
}