#include<stdio.h>
void main()
{
	int row,i,j,k,l;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=(row-i);j++)
			printf(" ");
		for(k=1;k<=((2*i)-1);k++)
			printf("*");
		printf("\n");
	}
}