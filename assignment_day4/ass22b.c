#include<stdio.h>
void main()		/* The nth fibonacci number */
{
	int terms,a=0,b=1,sum=0;
	printf("Enter the position: ");
	scanf("%d",&terms);
	for(int i=1;i<terms;i++)
	{
		a=b;
		b=sum;
		sum=a+b;
	}
	printf("%d\n",sum);
}