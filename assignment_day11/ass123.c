#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
enum dept{
	operation=1,marketing,research
};
enum desg{
	manager=1,asst_mngr,sr_officer
};
struct emp{
	int eid;
	int age;
	int salary;
	char name[20];
	char sex;
	enum dept department;
	enum desg designation;
};
void max_sal(struct emp *,int);
void main()
{
	struct emp *emp;
	int noe;
	printf("Enter the number of employee you want to record: ");
	scanf("%d",&noe);
	emp=(struct emp *)malloc(sizeof(struct emp)*noe);
	for(int i=0;i<noe;i++)
	{
		printf("Enter the record %d:\n",i+1);
		printf("Enter EID: ");
		scanf("%d",&emp[i].eid);
		printf("Enter name: ");
		fflush(stdin);
		gets(emp[i].name);
		printf("Enter age: ");
		scanf("%d",&emp[i].age);
		do{
			printf("Enter sex(M/F): ");
			fflush(stdin);
			scanf("%c",&emp[i].sex);
			emp[i].sex=toupper(emp[i].sex);
		}while((emp[i].sex!='M') && (emp[i].sex!='F'));
		do{
			printf("Enter department (1 for operation, 2 for marketing, 3 for research): ");
			scanf("%d",&emp[i].department);
		}while((emp[i].department<1) || (emp[i].department>3));
		do{
			printf("Enter designation (1 for manager, 2 for assistant manager, 3 for senior officer): ");
			scanf("%d",&emp[i].designation);
		}while((emp[i].designation<1) || (emp[i].designation>3));
		printf("Enter salary: ");
		scanf("%d",&emp[i].salary);
	}
	printf("EID NAME                 SEX AGE DESIGNATION DEPARTMENT SALARY\n");
	for(int i=0;i<noe;i++)
	{
		printf("%3d %-20s %3c %3d",emp[i].eid,emp[i].name,emp[i].sex,emp[i].age);
		switch(emp[i].designation)
		{
			case 1:
				printf(" manager ");
				break;
			case 2:
				printf(" asst_mngr ");
				break;
			case 3:
				printf(" sr_officer ");
				break;
			default:
				printf(" unknown ");
		}
		switch(emp[i].department)
		{
			case 1:
				printf(" operation ");
				break;
			case 2:
				printf(" marketing ");
				break;
			case 3:
				printf(" research ");
				break;
			default:
				printf(" unknown ");
		}
		printf(" %-d\n",emp[i].salary);
	}
	max_sal(emp,noe);
	free(emp);
}

void max_sal(struct emp *e,int emp_num)
{
	int max;
	for(int i=1,max=0;i<emp_num;i++)
	{
		if(e[i].salary > e[max].salary)
			max=i;
	}
	printf("Employee(s) who have maximum salaries are:\n");
	for(int i=0;i<emp_num;i++)
	{
		if(e[i].salary==e[max].salary)
		{
			if(e[i].sex=='M')
				printf("Mr. ");
			else
				printf("Ms. ");
			fflush(stdin);
			printf("%s\n",e[i].name);
		}
	}
}