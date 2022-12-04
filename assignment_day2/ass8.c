#include<stdio.h>
void main()
{
	int num,rem;
	printf("Enter a number: ");
	scanf("%d",&num);
	rem=num%2;
	if(rem==0)
		printf("\nThis is an even number\n");
	else
		printf("\nThis is an odd number\n");
}