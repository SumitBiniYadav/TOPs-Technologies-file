#include<stdio.h>

union DescArray{
	int a[4],i,j,temp;
}s1,s2,s3,s4;   

main()
{
	for(s2.i=0; s2.i<4;s2.i++)
	{
		printf("Enter A Number : ");
		scanf("%d",&s1.a[s2.i]);
	}
	
	for(s2.i=0;s2.i<4;s2.i++)
	{
		for(s3.j=s2.i+1; s3.j<4; s3.j++)
		{
			if(s1.a[s2.i] < s1.a[s3.j])
			{
				s4.temp = s1.a[s2.i];
				s1.a[s2.i] = s1.a[s3.j];
				s1.a[s3.j] = s4.temp; 
			}
		}
	}
	
	for(s2.i=0; s2.i<4; s2.i++)
	{
		printf("\n%d", s1.a[s2.i]);
	}
}
