#include<stdio.h>

main()
{
	int a;
	
	int r;
	
	printf("Enter Number : ");
	scanf("%d", &a);
	
	while(a!=0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
}
