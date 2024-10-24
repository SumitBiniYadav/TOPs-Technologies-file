#include<stdio.h>

main()
{
	char a[10];
	
	printf("Enter Name : ");
	gets(a);
	
	int i, len=0;
	for (i=0;a[i]!='\0'; i++)
	{
		len++;
	}
	printf("%d", len);
}
