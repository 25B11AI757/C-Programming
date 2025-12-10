#include<stdio.h>
#include<string.h>
int main( )
{
	char s1[20],s2[20];
	printf("Enter string1 name");
	gets(s1);
	printf("Enter string2 name");
	gets(s2);
	strcat(s1,s2);
	printf("Merge string=%s",s1);
	return 0;
}
