#include<stdio.h>
int main( )
{
	char s[20];
	int l;
	printf("Enter string name");
	scanf("%s",&s);
	l=strlen(s);
	printf("lengthof the string=%d",l);
	return 0;
}
