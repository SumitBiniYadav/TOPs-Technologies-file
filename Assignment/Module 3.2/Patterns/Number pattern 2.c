#include<stdio.h>

main()
{
	int i,j;                         // Declare loop control variables !!!
	
	for(i=1;i<=5;i++)                //Iterates through each row from 1 to 5 !!!
	{
		for(j=0;j<i;j++)             //Iterates to print integers in the current row !!!
		{
			printf("%d", 1 + j);   
			/*
			Adding j to '1' calculates the value to print.
			 For example, when j is 0, it prints '1', when j is 1, it prints '2', and so on !!!
			*/
		}
		printf("\n");               // After printing integers in the current row, move to the next line !!!
	}
}
