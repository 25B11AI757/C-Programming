#include<stdio.h>
#include<string.h>
int main( )
{
	char s[100];
	int i,l,j,flag=0;
	printf("Enter string name");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	l=i;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("It is a palindrome");
	else
	printf("It is not a palindrome");
	return 0;
}
