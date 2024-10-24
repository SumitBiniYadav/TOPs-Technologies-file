#include<stdio.h>

union myUnion{
	int a,b;
}s1,s2;

main()
{
	printf("Enter A Number : ");
	scanf("%d", &s1.a);
	printf("Enter A Number : ");
	scanf("%d", &s2.b);
	
	printf("Add : %d", s1.a+s2.b);
}
