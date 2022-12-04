#include <stdio.h>
#include <string.h>

int main()
{
	char s[20];
	int l,i,vowel=0,consonant=0,space=0,sc=0;
	printf("Enter the string: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			vowel++;
		else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			vowel++;
		else if((s[i]>'a'&& s[i]<='z')||(s[i]>'A'&& s[i]<='Z'))
			consonant++;
		else if(s[i]==' ')
			space++;
		else 
			sc++;
	}
	printf("No. of vowels= %d",vowel);
	printf("\nNo. of consonants= %d",consonant);
	printf("\nNo. of spaces= %d",space);
	printf("\nNo. of special characters= %d",sc);
	return 0;
}
