#include<stdio.h>
int main( )
{
	int A[10][10],B[10][10],C[10][10],r,c,i,j;
	printf("Enter rows and column sizes");
	scanf("%d%d",&r,&c);
	printf("Enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter B matrix values\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		 	
		}
	}
	printf("Result matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
