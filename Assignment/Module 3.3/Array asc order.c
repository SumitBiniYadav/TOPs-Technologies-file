#include<stdio.h>

main(){
	int a[10];                                   // Declare an array of size 10 to store integers
	int i, temp , j;
  // Loop to take input for each element of the array
	for(i=0;i<10;i++)
	{
		printf("Enter Array : ");
		scanf("%d", &a[i]);                     // Store each input in the arra
	}
	// Nested loops to sort the array in ascending order 
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{ // Compare each pair of elements and swap if they are out of order
			if(a[i]>a[j])
			{
				temp = a[i];                   // Store the value of a[i] in temp
				a[i] = a[j];                   // Assign a[j] to a[i]
				a[j] = temp;                   // Assign temp to a[j], completing the swap
			}
		}
	}
	// Print the array in ascending order
	printf("\nAscending Order is ");
	for(i=0;i<10;i++)
	{
		printf("\n%d", a[i]);
	}
	
}
