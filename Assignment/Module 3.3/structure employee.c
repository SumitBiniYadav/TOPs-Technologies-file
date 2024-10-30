#include<stdio.h>

struct Employee	{
	int empno;
	char empname[50];
	char address[100];
	int age;
}emp;

displayemp(struct Employee emp){
	printf("\nEmployee Details : \n");
	printf("Employee Number: %d\n", emp.empno);
	printf("Employee Name: %s\n", emp.empname);
	printf("Employee Address: %s\n",emp.address);
	printf("Age: %d\n", emp.age);
}

main()
{
	struct Employee emp;
	
	printf("Enter Employee Number: ");
	scanf("%d", &emp.empno);
	
	getchar();
	printf("\nEnter Employee Name: ");
	gets(emp.empname);
	
	printf("\nEnter Employee Address: ");
	gets(emp.address);
	
	printf("\nEnter Employee Age: ");
	scanf("%d", &emp.age);
	
	
	displayemp(emp);
	
}
