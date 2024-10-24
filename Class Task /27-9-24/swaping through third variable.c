#include<stdio.h>
//swaping using third variable...
int main()
{
	int a,b,temp;
	
	printf("Enter Number 1 : ");
	scanf("%d", &a);
	
	printf("Enter Number 2 : ");
	scanf("%d", &b);
		
	temp = a;
	a=b;
	b=temp;
	
	printf("After swaping value of A : %d", a );
	printf("\nAfter swaping value of B : %d", b );
	return 0;
}
