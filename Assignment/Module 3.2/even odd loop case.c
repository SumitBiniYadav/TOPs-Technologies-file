#include<stdio.h>
int main()
{
	int n, i=1, ev=0, odd=0;   

	while (i<=10)                                
	{                                           
		printf("\nEnter number :");
		scanf("%d", &n);
		
		if(n%2==0)                           
		{                                      
			printf("\n%d is even", n);         
			ev++;                                               
		}
		else                                
		{
			printf("\n%d is odd", n );        
			odd++;                                             
		}
		i++;                                 
	}
	printf("\nCount of even : %d",ev);       
	printf("\nCount of odd : %d",odd);       
             
	return 0;
}
