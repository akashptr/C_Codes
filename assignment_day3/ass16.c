#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	(num1>num2) ? ((num1>num3) ? (printf("%d is maximum",num1)) : (printf("%d is maximum",num3))) : ((num2>num3) ? (printf("%d is maximum",num2)) : (printf("%d is maximum",num3)));
}