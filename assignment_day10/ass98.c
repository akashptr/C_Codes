#include <stdio.h>
#include <string.h>

int main()
{
	char s[20];
	int l,i;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if((s[i]>='a' && s[i]<='x')||(s[i]>='A' && s[i]<='X'))
			s[i]=s[i]+2;
		else if(s[i]=='y'||s[i]=='z'||s[i]=='Y'||s[i]=='Z')
			s[i]=s[i]-24; //s[i]=s[i]-26+2	
	}
	puts(s);
	return 0;
}
