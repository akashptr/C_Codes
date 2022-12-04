#include<stdio.h>
void main()
{
	int num1,num2,temp;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("The numbers before swap is: %d and %d\n",num1,num2);
	temp=num2;
	num2=num1;
	num1=temp;
	printf("The numbers after swap is: %d and %d\n",num1,num2);
}