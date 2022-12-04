#include<stdio.h>
void main()
{
	union XYZ
	{
		int x;
		float y;
		char z;
	};
	union XYZ v1;
	printf("Enter the values of union(int float char): ");
	scanf("%d%f",&v1.x,&v1.y);
	fflush(stdin);
	scanf("%c",&v1.z);
	printf("The data of the union is: %d, %f, %c",v1.x,v1.y,v1.z);
}