#include<stdio.h>

main()
{
	int n = 65;
	int i , k ; 
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%c", n);
			n++;
		}
		printf("\n");
	}
}
