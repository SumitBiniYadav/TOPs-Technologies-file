#include<stdio.h>
int main()
{
	//year into days..
	int a;
	printf("Enter Year : ");
	scanf("%d", &a);   
	
	printf("\nDays are : %d", a*365); 
	
	//days into years..
	int b;
	printf("\nEnter Days : ");
	scanf("%d", &b);
	
	printf("\nYears : %.2f", (float) b/365); //as year could be in float therefore we'll use float and divide a by 365 days for conversion...
	
	return 0;
}
