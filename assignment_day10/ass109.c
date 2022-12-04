#include <stdio.h>
#include <string.h>

int main()
{
	char s[30],s1[30];
	int i,l,j=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]!=s[i+1])
			s1[j++]=s[i];
	}
	s1[j]='\0';
	puts(s1);
	return 0;
}
