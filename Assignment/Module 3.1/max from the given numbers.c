#include<stdio.h>

main()
{
	int a[10];                             //array decleration!!!
	int n,r,j;                             //variable decleration!!!
	int i = 0;                             //initialize i to 0 !!!
	int max=0;
	
	printf("Enter Numbers : ");
	scanf("%d", &n);
	
	// Extract digits and store in the array
	while(n!=0 && i<10)                   //ensuring that we dont exceed array sizee !!!
	{
		r=n%10;
		a[i]=r;
		n=n/10;
		i++;
	}
	
	max = a[0];                           //intitalizing variable max with 1st digit of array a !!!
	
	for(j=1;j<i;j++)                      //loop for finding the maximum digit !!!
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}
	printf("The maximum Value is : %d", max);   //printing max value !!!
}
