#include<stdio.h>

struct Employee	{
	int empno;
	char empname[50];
	char address[100];
	int age;
}emp;

displayemp(struct Employee emp){
	printf("\n Employee Details : \n");
	printf("\nEmployee Number: %d\n", emp.empno);
	printf("Employee Name: %s\n", emp.empname);
	printf("Employee Address: %s\n",emp.address);
	printf("Age: %d\n", emp.age);
}

main()
{
	struct Employee employees[5];
	int i;
	
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter Employee Number: ");
		scanf("%d", &employees[i].empno);
	
		getchar();
		printf("Enter Employee Name: ");
		gets(employees[i].empname);
	
		printf("Enter Employee Address: ");
		gets(employees[i].address);
	
		printf("Enter Employee Age: ");
		scanf("%d", &employees[i].age);
		
		printf("**************************");
	}
	
	printf(" \nDisplay Employee Details :");
	for(i=0;i<5;i++){
		printf("Employees %d details :", i+1);
		displayemp(employees[i]);
	}

	
}
