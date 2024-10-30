#include<stdio.h>
main()
{
	int i,j,k;                      //Declare loop control variables !!!
	
	for(i=1;i<=5;i++)               //Iterates through each row from 1 to 5  !!!
	{
		for(j=1;j<=5-i;j++)        //Prints the space for current row !!!
		{ 
			printf(" ");           // Print a space to create the right alignment of stars !!!
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");         //Print a star followed by a space !!!
		}
		printf("\n");             //Move to the next line after printing stars in the current row !!!
	}
}
