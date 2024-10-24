#include<stdio.h>
//menu driven code / using break statements...
int main()
{
	int ch; 
	while (1) //infinite loop..
	{
		printf("\npress 1 for Right angel pattern !!");
		printf("\npress 2 for factorial !!");
		printf("\npress 3 for Prime!!");
		printf("\npress 4 for Exit!!");
		
		printf("\nEnter Choice : ");
		scanf("%d", &ch);
		
		if (ch==1)
		{
			int n,i,j;
			printf("\nEnter Number of rows : ");
			scanf("%d", &n);
			
			for (i=1; i<=n; i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		if (ch==2)
		{
			printf("Factorial Logic to be entered !!");
		}
		if (ch==3)
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
	 	}
		
		if (ch==4)
		{
			printf("Thank You !!");
			break;
		}
		
		else 
		printf("Invalid Input !!");
		break;
	}
}
