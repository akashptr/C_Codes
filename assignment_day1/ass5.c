#include<stdio.h>
void main()
{
	float cel,fahr;
	printf("Enter the temperature in Celsius: ");
	scanf("%f",&cel);
	fahr=(cel*1.8)+32;
	printf("The temperature in Fahrenheit is: %.2f",fahr);
}