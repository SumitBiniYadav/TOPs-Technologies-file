#include<stdio.h>

main()
{
	char a[5], b[5];
	printf("Enter String 1 : ");
	gets(a);
	printf("Enter String 1 : ");
	gets(b);
	
	int result = strcmp(a,b);
	
	printf("Result is : %d", result);
}
