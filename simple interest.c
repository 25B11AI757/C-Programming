#include<stdio.h>
int main( )
{
	float pi=3.14,r,area;
	printf("enter pi,r,r values");
	scanf("%f%f%f",&pi,&r,&r);
	area=pi*r*r;
	printf("area=%f",area);
	return 0;
}
