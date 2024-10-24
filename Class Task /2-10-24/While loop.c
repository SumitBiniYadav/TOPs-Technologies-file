#include<stdio.h>
int main()
{
	int n, i ,j, sum;
	
	printf("Enter Number : ");
	scanf("%d", &n);
	
	j=n;
    for(i=1;i<=n && j>=1; i++ ,j--)
	{
		sum = sum + i;
		printf("\n%d", j);
	}
	printf("\nsum is %d ", sum);
	return 0;
}
