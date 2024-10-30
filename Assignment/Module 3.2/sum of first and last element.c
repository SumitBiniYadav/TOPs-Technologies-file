#include<stdio.h>

main()
{
	int n,r;
	int a[10];
	int i = 0;
	int sum = 0, firstele, lastele;
	
	
	
	printf("Enter Numbers : ");
	scanf("%d", &n);
	
	lastele = n%10;
	
	while(n!=0 && i<10)
	{
		r=n%10;
		a[i]=r;
		n=n/10;
		i++;
	}
	
	firstele = a[i-1];
	
	sum = firstele + lastele;
	
	printf("The sum of First and Last element is : %d", sum);
}	
