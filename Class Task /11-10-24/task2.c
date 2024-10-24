#include<stdio.h>

fac()
{
	int n,i,fac1=1;
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac1*=i;
	}
	printf("\nfactorial is : %d",fac1);
}

main()
{
	fac();
	fac();
	fac();
}
