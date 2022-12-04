#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	if((num1==0)||(num2==0))
		printf("Wrong input(one of the input is 0)");
	else
	{
		int divisor,divident,rem,gcd,lcm;
		divisor=num1;
		divident=num2;
		rem = divident % divisor;
		while(rem != 0)
		{
			divident = divisor;
			divisor = rem;
			rem = (divident % divisor);
		}
		gcd = divisor;
		lcm = (num1 * num2) / gcd;
		printf("GCD & LCM are respectively: %d, %d",gcd,lcm);
	}
}