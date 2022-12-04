#include<stdio.h>
long int fact(int);
void main()
{
	int number;
	long int factorial;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number<0)
		printf("The number should be possitive\n");
	else	
	{
		factorial=fact(number);
		printf("%d! = %ld\n",number,factorial);
	}
}
long int fact(int num)
{
	long int result=1;
	for(int i=1;i<=num;i++)
		result=result*i;
	return(result);
}