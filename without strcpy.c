#include<stdio.h>
#include<string.h>
int main( )
{
	char s1[20],s2[20];
	int i;
	printf("Enter string1 name");
	gets(s1);
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("original string=%s",s1);
	printf("\ncopied string=%s",s2);
	return 0;
}
