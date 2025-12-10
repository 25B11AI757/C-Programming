#include<stdio.h>
int main( )
{
	char s[20];
	printf("Enter string name");
	scanf("%s",&s);
	printf("Reverse string is=%s",strupr(s));
	return 0;
}
