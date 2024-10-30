#include<stdio.h>

main()
{
	int a , r , max = 0 ;
	
	printf("Enter Number : ");
	scanf("%d", &a);
	
	while(a>0)
	{
		r = a % 10;
		if(max < r)
		{
			max = r;
		}
		a = a / 10;
	}
	
	
	printf("The maximum Number is : %d", max);
	
}
