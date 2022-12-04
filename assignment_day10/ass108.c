#include <stdio.h>
#include <string.h>

int main()
{
	char s[30],surname[15];
	int i,l,j,k=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=l-1;s[i]!=' ';i--);
	for(j=i+1;s[j]!='\0';j++)
		surname[k++]=s[j];
	surname[k]='\0';
	printf("%c.",s[0]);
	for(k=1;k<i;k++)
	{
		if(s[k]==' ' && s[k+1]!=' ')
			printf("%c.",s[k+1]);
	}
	puts(surname);
	return 0;
}
