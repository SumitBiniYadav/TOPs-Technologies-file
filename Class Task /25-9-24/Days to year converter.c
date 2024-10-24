	#include<stdio.h>
main ()
{
	int a;
	printf("Enter Days : ");
	scanf("%d", &a);
	
	printf("Years : %.2f", (float) a/365); //as year could be in float therefore we'll use float and divide a by 365 days for conversion... 
}
