#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	struct student
	{
		int roll;
		char name[20];
		char sex;
		int age;
		int marks;
	};
	typedef struct student stu;
	stu s[10];
	int nos,eligible[11],max,j;
	do{
		printf("Enter the number of students you want to record(max 10 records): ");
		scanf("%d",&nos);
	}while((nos>10)||(nos<0));
	for(int i=0;i<nos;i++)
	{
		system("cls");
		printf("Enter data for record %d\n",i+1);
		printf("Enter name(Max 20 charecters): ");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter roll: ");
		scanf("%d",&s[i].roll);
		do{
			printf("Enter sex(M/F): ");
			s[i].sex=toupper(getche());
		}while((s[i].sex!='M')&&(s[i].sex!='F'));
		printf("\nEnter age: ");
		scanf("%d",&s[i].age);
		printf("Enter marks: ");
		scanf("%d",&s[i].marks);
	}
	for(int i=0,j=1;i<nos;i++)
	{
		if(s[i].age>=18)
		{
			eligible[j]=i;
			eligible[0]=j++;
		}
	}
	max=s[0].marks;
	for(int i=1;i<nos;i++)
		if(s[i].marks > max)
			max=s[i].marks;
	printf("Student(s) with highest marks are:\n");
	for(int i=0;i<nos;i++)
	{
		if(s[i].marks==max)
			if(s[i].sex=='M')
				printf("%3d\tMr. %20s\t%2c\t%3d\t%4d\n",s[i].roll,s[i].name,s[i].sex,s[i].age,s[i].marks);
			else
				printf("%3d\tMiss %20s\t%2c\t%3d\t%4d\n",s[i].roll,s[i].name,s[i].sex,s[i].age,s[i].marks);
	}
	printf("Those who are eligible to vote are:\n");
	for(int i=1;i<=eligible[0];i++)
	{
		printf("%3d\t%20s\t%2c\t%3d\t%4d\n",s[eligible[i]].roll,s[eligible[i]].name,s[eligible[i]].sex,s[eligible[i]].age,s[eligible[i]].marks);
	}
}