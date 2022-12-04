#include<stdio.h>
void main()
{
	int num1,num2,xor;
	printf("Enter the two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("The numbers before swap is: %d, %d\n",num1,num2);
	xor=num1^num2;
	num1=xor^num1;
	num2=xor^num2;
	printf("The numbers after swap is: %d, %d",num1,num2);
}