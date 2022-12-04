#include<stdio.h>
void main()
{
	int calls;
	float bill;
	printf("Enter the number of calls: ");
	scanf("%d",&calls);
	bill=250;							/*Rental*/
	if(calls<=100)
	{
		bill=bill+(calls*0.2);			/*first 100 calls at 0.2 rs per call*/
	}
	else if(calls<=200)
	{
		calls=calls-100;
		bill=bill+20+(0.3*calls);		/*Second 200 calls at 0.3 rs per call*/
	}
	else
	{
		calls=calls-200;
		bill=bill+50+(calls*0.5);		/*Rest calls are at 0.5 rs per call*/
	}
	printf("Net amount is: Rs. %0.2f",bill);
}