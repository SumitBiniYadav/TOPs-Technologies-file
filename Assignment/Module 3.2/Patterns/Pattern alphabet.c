#include<stdio.h>

main()
{
	int i,j;                         // Declare loop control variables
	
	for(i=1;i<=5;i++)                //Iterates through each row from 1 to 5
	{
		for(j=0;j<i;j++)             //Iterates to print characters in the current row
		{
			printf("%c", 'A' + j);   
			/*
			Adding j to 'A' calculates the ASCII value of the character to print.
			 For example, when j is 0, it prints 'A', when j is 1, it prints 'B', and so on
			*/
		}
		printf("\n");               // After printing characters in the current row, move to the next line
	}
}
