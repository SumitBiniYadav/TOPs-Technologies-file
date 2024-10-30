#include<stdio.h>

main()
{
	int n,i,eve,od,even=0,odd=0;  //variable decleration !!
	
	
	for(i=1;i<=10;i++)           //for loop for asking the input from the user 10times !!
	{
	printf("Enter Numbers : "); 
	scanf("%d", &n);
	
	if(n%2==0)                  //if input/2=0 the number is said to be an even Number !! 
	{
		printf("%d is an Even Number !\n", n);
		eve++;                 //increment in eve variable to show total numbers of even inputs !!
		even+=n;               //adding inputs in even variable to show sum total of even inputs !!  
	}  
	else                       //if input/2!=0 the number is said to be an odd Number !!
	{
		printf("%d is an Odd Number !\n", n);
		od++;                 //increment in od variable to show total number of odd inputs !!
		odd+=n;               //adding inputs in odd variable to show sum total of odd inputs !!
	}
	}
	
	printf("\nTotal Number Of Even Numbers : %d", eve);
	printf("\nTotal Number Of Odd Numbers : %d", od);
	printf("\nSum of Even Numbers : %d", even);
	printf("\nSum of Odd Numbers : %d", odd);
}
