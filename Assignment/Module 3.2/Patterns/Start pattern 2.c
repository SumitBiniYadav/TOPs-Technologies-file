#include<stdio.h>

main()
{
	int i, j ;                 //declare loop control variables !!!
	 //(increasing stars)
	for(i=1;i<=6;i++)          //loop iterates from 1 to 6 !!!
	{
		for(j=1;j<=i;j++)      //loop iterates from 1 to the current value of i !!!
		{
			printf("*");       //print a star for each iteration !!!
		}
		printf("\n");          //move to the next line after printing stars !!!
	}
	//(decreasing stars)
	for(i=5;i>=1;i--)         //iterates from 5 down to 1 !!!
	{
		for(j=1;j<=i;j++)     //iterates from 1 to the current value of i !!!
		{
			printf("*");      //print a star for each iteration !!!
		}
		printf("\n");         //move to the next line !!!
	}
}
