#include<stdio.h>
void sub(int,int);
int main( )
{
int a=20,b=10;
sub(a,b);
return 0;
}
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("sub=%d",c);
}
