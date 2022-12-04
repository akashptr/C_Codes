#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
		if(num1>num3)
		{
			printf("%d is largest\n",num1);
			if(num2>num3)
				printf("%d is the smallest",num3);
			else
				printf("%d is the smallest",num2);
		}
		else
			printf("%d is largest\n%d is the smallest\n",num3,num2);
	else if(num2>num3)
	{	
		printf("%d is largest\n",num2);
		if(num1>num3)
			printf("%d is the smallest\n",num3);
		else
			printf("%d is the smallest\n",num1);
	}
	else
		printf("%d is largest\n%d is the smallest\n",num3,num1);
}