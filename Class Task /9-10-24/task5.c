#include<stdio.h>
int main()
{
	int i,a[4],b[4];
	int sum;
	
	for(i=0;i<4;i++)
	{
		printf("Enter Value for A : ");
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		printf("Enter Value for B : ");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<4;i++)
	{
		sum = a[i]+b[i];
		printf("\n%d", sum);
	}
}
