#include<stdio.h>

struct myStruct
{
	int a,b;
}s1;

main()
{
	printf("Enter a no. : ");
	scanf("%d", &s1.a);
	printf("Enter a no. : ");
	scanf("%d", &s1.b);
	
	printf("Add : %d", s1.a+s1.b);
}
