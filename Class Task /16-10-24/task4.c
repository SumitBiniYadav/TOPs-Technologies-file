#include<stdio.h>
main()
{
	
	char a[10], b[10];
	
	printf("Enter A Name : ");
	gets(a);
	
	
	strcpy(b,a); //inbuilt argument for copying a string to other variable...
	
	printf("Copy string is : %s", b);
}
