#include<stdio.h>
//menu driven code / using break statements...
int main()
{
	int ch;
	while (1)
	{
	
		printf("\nEnter 1 for Right angel Patter !!!");
		printf("\nEnter 2 for Factorial !!!");
		printf("\nEnter 3 for Prime !!!");
		printf("\nEnter 4 to Exit !!!");
		
		printf("\nChoose a Number : ");
		scanf("%d", &ch);
		
		if(ch==1)
		{
			int n;
			int i;
			int j;
			printf("Enter Number of rows : ");
			scanf("%d",&n);
			
			for(i=1; i<=n; i++)
			{
				
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		
		if(ch==2)
		{
			int n,i,fact=1;
			
			printf("Enter a Number : ");
			scanf("%d", &n);
			
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d", fact);
		}
		if (ch==3)
		{
			int n, i,c=0;
			
			printf("Enter a Number : ");
			scanf("%d", &n);
			
			for (i=1; i<=n; i++)
			{
				if (n%i==0)
				{
					c++;
				}
		    }
			    if(n==2)
				{
					printf("%d is Not a Prime Number ", n);
				}
				else if (c==2)
				{
					printf("%d is a Prime Number ", n);
				}
				else 
				{
					printf("%d is Not A Prime Number ", n);
				}
			
			
		}
		if (ch==3)
		{
			printf("\nThank You !!! ");
			break;
		}
		else 
		{
			printf("\nInvalid Input !!!");
			break;
		}
		return 0;
	}
	
	return 0;
}
