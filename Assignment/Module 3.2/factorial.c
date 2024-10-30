#include<stdio.h>

main()
{
	int n, i, fac=1;               //variable decleration !!
	printf("Enter A Number : ");
	scanf("%d", &n);               
	
	
	for(i=1;i<=n;i++)             //loop 1*1=1 anf so on to calculate the fac of the input !!
	{
		fac*=i;                  //1*1=1 || fac=fac*i
	}
	
	printf("The Factorial is : %d", fac);
}
