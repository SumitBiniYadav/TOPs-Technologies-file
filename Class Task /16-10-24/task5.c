#include<stdio.h>
main()
{
	char a[10], b[10];
	int i;
	printf("Enter A Name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i]; //stores value of a to b .. 
	}
	b[i]='\0'; //to stop storing futher more values to variable b .. 
	
	printf("Copy string to b : %s", b);
}
