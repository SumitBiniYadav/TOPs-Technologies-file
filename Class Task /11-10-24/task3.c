#include<stdio.h>
rightap()
{
	int i,j;
	
	for(i=0;i<=5;i++)  //row
	{
		for(j=1;j<=i;j++) //column starts from 1 and increases after every iteration
		{
			printf("*");  
		}
		printf("\n");
	}
}

fac()
{
	int n,i,fac1=1; //variables declared n for input, i for loop and fac1 for storing the multiplication of products.
	
	printf("Enter A Number : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)    //i starts from 1 (i=1) and goes to (i=n) ex-(i=5).
	{
		fac1*=i;         //fac = fac * i / ex- fac1 = fac1(1) * 1 then  fac1(1) = fac(1) * 2 then fac1(2) = fac1(2) * 3 then fac1(6) = fac1(6) * 4 and so on.. 
	}
	printf("The Factorial of %d is : %d", n,fac1);
}

prime()
{
	int n, i, c=0;
	
	printf("Enter A Number : ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		if (n%i==0)
		{
			c++;
		}
    }
    if(n==2)
    {
    	printf("%d is Not A Prime Number !",n);
	}
	else if(c==2)
	{
		printf("%d is A Prime Number !",n);
	}
	else 
	{
		printf("%d is Not A Prime Number !",n);
	}
}
ascarray()
{
	int a[3];
	int n,i,j,temp=0; 
	for(i=0;i<3;i++)
	{
		printf("Enter Number : ");
		scanf("%d", &a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n", a[i]);
	}
}
main()
{
	int n;
	
	printf("\nEnter  1 for Right Angel Pattern !!!! ");
	printf("\nEnter  2 for Factorial !!!! ");
	printf("\nEnter  3 for Prime !!!! ");
	printf("\nEnter  4 for Ascending Array !!!! ");
	printf("\nEnter  5 for Exit !!!! ");
	
	printf("\nEnter Your Choice : ");
	scanf("%d", &n);
	
	if(n==1)
	{
		rightap();
	}
	else if(n==2)
	{
		fac();
	}
	else if(n==3)
	{
		prime();
	}
	else if(n==4)
	{
		ascarray();
	}
	else if(n==5)
	{
		printf("Thank You For Your Time !!!!");
	}
	else
	{
		printf("Invalid Input !!!!");
	}
	
	
}
