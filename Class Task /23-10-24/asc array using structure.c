#include<stdio.h>

struct AsscArray{
	int a[4],i,j,temp;
}s1;

main()
{
	for(s1.i=0; s1.i<4;s1.i++)
	{
		printf("Enter A Number : ");
		scanf("%d",&s1.a[s1.i]);
	}
	
	for(s1.i=0;s1.i<4;s1.i++)
	{
		for(s1.j=s1.i+1;s1.j<4;s1.j++)
		{
			if(s1.a[s1.i]>s1.a[s1.j])
			{
				s1.temp = s1.a[s1.i];
				s1.a[s1.i] = s1.a[s1.j];
				s1.a[s1.j] = s1.temp; 
			}
		}
	}
	
	for(s1.i=0;s1.i<4;s1.i++)
	{
		printf("\n%d", s1.a[s1.i]);
	}
}
