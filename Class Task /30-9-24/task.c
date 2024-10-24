#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Marks : ");
	scanf("%d", &marks);
	
	if ( marks> 90)
	{
		printf("A++");
	}
	else if (marks>=30)
	{
		printf("A+");
	}
	else
	{
		printf("B");
	}
	return 0;
}
