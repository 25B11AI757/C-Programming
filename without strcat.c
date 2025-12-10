#include<stdio.h>
#include<string.h>
int main( )
{
	char s1[20],s2[20];
	int i,l;
	printf("Enter string1 name");
	scanf("%s1",&s1);
	printf("Enter string2 name");
	scanf("%s2",&s2);
	for(i=0;s1[i]!='\0';i++);
	l=i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[l++]=s2[i];
	}
	s1[l]='\0';
	printf("Merge string=%s",s1);
	return 0;
}
