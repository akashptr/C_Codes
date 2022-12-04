#include<stdio.h>
void main()
{
	struct xyz
	{
		int num_i;
		float num_f;
	};
	struct xyz v1,v2,v3;
	printf("Enter integer value of first variable: ");
	scanf("%d",&v1.num_i);
	printf("Enter float value of first variable: ");
	scanf("%f",&v1.num_f);
	printf("Enter integer value of second variable: ");
	scanf("%d",&v2.num_i);
	printf("Enter integer value of second variable: ");
	scanf("%f",&v2.num_f);
	v3.num_i=v1.num_i + v2.num_i;
	v3.num_f=v1.num_f+v2.num_f;
	printf("sum is: (%d, %.2f)",v3.num_i,v3.num_f);
}
