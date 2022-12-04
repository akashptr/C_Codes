#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<0)
	{
		num=(-num);
		printf("The absolute value of the number is: %d",num);
	}
	else
		printf("The absolute value of the number is: %d",num);
}