#include<stdio.h>

main()
{
	int n = 1;                    //variable decleration initialised from 1 !!!
	int i , k ;                   //loop variable decleration !!!
	
	for(i=1;i<=5;i++)             //Iterates through each row from 1 to 5 !!!
	{
		for(k=1;k<=i;k++)         //Iterates to print numbers in the current row !!!
		{
			printf("%d ", n);     //Print the current number followed by a space !!!
			n++;                  //Increment the number for the next print !!!
		}
		printf("\n");            //print the next row !!!
	}
}
