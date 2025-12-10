#include<stdio.h>
#include<stdlib.h>
int main( )
{
	int A[10][10],B[10][10],C[10][10],i,j,k,r1,r2,c1,c2;
	printf("Enter A matrix size");
	scanf("%d%d",&r1,&c1);
	printf("Enter B matrix size");
	scanf("%d%d",&r2,&c2);
	if(r2!=c1)
	{
		printf("Matrix is invalid");
		exit(1);
	}
	printf("Matrix of A is");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix of B is");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
	     scanf("%d",&B[i][j]);
	    }
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			C[i][j]=0;
			for(k=0;k<r2;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][i];
			}
		}
	}
	printf("Result matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
