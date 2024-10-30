#include<stdio.h>

main()
{
	// Declare 3x3 matrices for operations
	int a[3][3], b[3][3], c[3][3] , d[3][3] , e[3][3];
	int i, j ;
	
	// Input values for the first matrix
	printf("Enter the value for 1st Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("value of [%d] [%d] : ", i , j );
			scanf("%d", &a[i][j]);
		}
	}
	
	// Input values for the second matrix
	printf("Enter the value of 2nd Matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("value of [%d] [%d] : ", i , j );
			scanf("%d", &b[i][j]);
		}
	}
	
	
	// Perform addition, subtraction, and multiplicatio
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j]; //Addition of the two matrix stored to new array c
		d[i][j]=a[i][j]-b[i][j]; //Substraction of the two matrix stored to new array d
		e[i][j]=a[i][j]*b[i][j]; //Multiplication of the two matrix stored to new array e  
		}
	}
	
	// Display the result of addition
	printf("\nSumation of two matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d : ", c[i][j] );
		}
	}
	
	// Display the result of subtraction
	printf("\nSubstraction of two matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d : ", d[i][j] );
		}
	}
	
	// Display the result of element-wise multiplication
	printf("\nMultiplication of two matrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d : ", e[i][j] );
		}
	}
	
	
}
