#include<stdio.h>

conc()
{
	char a[5];
	char b[5];
	printf("Enter A String :");
	gets(a);
	printf("Enter A String :");
	gets(b);
	
	printf("Merge string is : %s", strcat(a,b));
	
}

main()
{
	conc();
}
