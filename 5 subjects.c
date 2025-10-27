#include<stdio.h>
int main( )
{
	int s1,s2,s3,s4,s5,sum,avg;
	printf("enter the values of s1,s2,s3,s4,s5");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("sum=%d",sum);
	avg=sum/5;
	printf("avg=%d",avg);
	return 0;
}
