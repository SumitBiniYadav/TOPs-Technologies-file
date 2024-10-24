#include<stdio.h>
// And, OR Operators...
int main()
{
	int n1,n2,n3;
	
	printf("Enter N 1 : ");
	scanf("%d", &n1);
	printf("Enter N 2 : ");
	scanf("%d", &n2);
	printf("Enter N 3 : ");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is Greatest", n1);
		
	}
	else if (n2>n1 && n2>n3)
	{
		printf("%d is Greatest", n2);
	}
	else
	{
		printf("%d is Greatest", n3); 
	}
	/*
	if(n1>n2 || n1>n3) [in or operator is any of one is correct the statement will get executed..]
	{
		printf("%d is Greatest", n1);
		
	}
	else if (n2>n1 || n2>n3)
	{
		printf("%d is Greatest", n2);
	}
	else
	{
		printf("%d is Greatest", n3);
	}
	*/
	return 0;
	
}
