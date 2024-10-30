#include<stdio.h>
int main()
{
	int n; 
	printf("Enter Number : ");
	scanf("%d", &n);
	
	n%2==0 ? printf("%d is even.", n) : printf("%d is Odd.", n);
	
	
	return 0;
}
