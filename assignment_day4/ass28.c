#include<stdio.h>
#include<math.h>
void main()
{
	int num,org_num,rem,result=0,nod=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	org_num=num;
	while(org_num!=0)
	{
		org_num/=10;
		++nod;
	}
	
	org_num=num;
	while(org_num!=0)
	{
		rem=org_num%10;
		result+=pow(rem,nod);
		org_num/=10;
	}
	
	if(result==num)
		printf("Armstrong number");
	else
		printf("Not an Armstrong number");
}