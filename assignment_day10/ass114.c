#include <stdio.h>
#include <string.h>

int main()
{
	char s[30],s1[10],s2[30];
	int i=0,l,j=0,k=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	if(s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')
		puts(s);
	else
	{
		for(i=0;i<l;i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				break;
			else
				s1[i]=s[i];
		}
		s1[i]='\0';
		for(j=i;s[j]!='\0';j++)
		{
			s2[k++]=s[j];
		}
		s2[k]='\0';
		puts(strcat((strcat(s2,s1)),"ay"));
	}
	return 0;
}
