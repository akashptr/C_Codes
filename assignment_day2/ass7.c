#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a charecter: ");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122)
	{
		ch=ch-32;
		printf("Character after convertion is: %c",ch);
	}
	else if(ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("Character after convertion is: %c",ch);
	}
	else if(ch>=48&&ch<=57)
		printf("It is a number");
	else
		printf("It is a special character");
}