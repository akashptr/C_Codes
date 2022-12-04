#include <stdio.h>
#include <string.h>

int palin(char a[])
{
	int len,i;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=a[len-i-1])
			return 0;
	}
	return 1;
}

int main()
{
	char s[20],r[20];
	int l,i,k=0,p=0;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<=l;i++)
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			r[k]='\0';
			p+=palin(r);
			k=0;
		}
		else
			r[k++]=s[i];
	}
	printf("The number of palindromic words are: %d",p);
	return 0;
}
