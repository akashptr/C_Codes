#include <stdio.h>
#include <string.h>

int main()
{
	char s[30],s1[10],s2[30],s3[10];
	int i,l1,l2,l3,h,j,flag,k=0;
	printf("Enter a string: ");
	gets(s);
	printf("Input a pattern: ");
	gets(s1);
	printf("Input another pattern: ");
	gets(s3);
	l1=strlen(s);
	l2=strlen(s1);
	l3=strlen(s3);
	for(i=0;i<=l1;i++)
	{
		flag=0;
		for(j=0;j<l2;j++)
		{
			if(s1[j]!=s[i+j])
				flag=1;
		}
		if(flag==1)
			s2[k++]=s[i];
		else
		{
			i=i+l2-1;
			for(h=0;h<l3;h++)
				s2[k++]=s3[h];
		}
	}
	s2[k]='\0';
	puts(s2);
	return 0;
}
