#include<stdio.h>
int main( )
{
	int x,y,and,or;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	and=x&y;
	printf("Bitwise and=%d",and);
	or=x&y;
	printf("Bitwise or=%d",or);
	return 0;
}
