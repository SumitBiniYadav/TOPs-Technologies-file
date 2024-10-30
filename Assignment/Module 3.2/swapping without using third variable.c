#include<stdio.h>
//Swaping without using third variable...
int main()
{
	int a,b;
	
	printf("Enter your frist Number : ");
	scanf("%d", &a);
	
	printf("Enter your secound Number : ");
	scanf("%d", &b);
	
	a= a+b;
	b=a-b;
	a=a-b;
	
	printf("A After swapping : %d", a);
	printf("\nB After swapping : %d", b);
	return 0;
}
