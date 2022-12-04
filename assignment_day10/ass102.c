#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(char str[], int l, int h)
{
	if (l < h)
	{
		swap(&str[l], &str[h]);
		reverse(str, l + 1, h - 1);
	}
}

int main()
{
	char s[20];
	int l;
	printf("Enter a string: ");
	gets(s);
	l=strlen(s);
	reverse(s,0,l-1);
	puts(s);
	return 0;
}
