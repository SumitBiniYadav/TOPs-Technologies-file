#include<stdio.h>
int main()
{
	int n,i,c=0;
	
	printf("Enter Number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if (n==2)
	{
	    printf("%d is Not a Prime Number", n);
	}	
	else if (c==2)
	{
		printf("%d is Prime Number", n);
		}	
	else
	{
		printf("%d is not Prime Number", n);
	}
	
	return 0;
}

