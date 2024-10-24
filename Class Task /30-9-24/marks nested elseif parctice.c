#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks (0-100) : ");
	scanf("%d", &marks);
	
	if (marks>30)
	{
		if (marks > 90 && marks <= 100)
		{printf("\nPassed with distinction");
		}
		else if (marks>= 60 && marks <= 90){
			printf("\nPassed + A");
		}
		else if (marks >= 30 && marks < 60)
		{
			printf("\nPassed + B");
		}
		else 
		{
			printf("Invalid Input");
		}
	}
	else 
	{
		printf("Fail");
	}
	
	return 0;	
}
