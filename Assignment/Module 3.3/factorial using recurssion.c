#include<stdio.h>
int fac(int n)
{
	if (n==1)                    // base case for the recurssive function. As factorial of 1 is always 1.
	{
		return 1;               //return 1 for the factorial of 1.
	}
	int factNM1 = fac(n-1);    //finding fac of fac(n-1) ex = fac(6) = fac(5) * 6 !!!
	int factN = factNM1 * n;   //multiplying variable with fac(n-1) !!!
	return factN;
}
main()
{
	int n;                    //decleration of variable n to take user input.
	printf("Enter A Number : ");
	
	if (n<0)                  //handles is n is equal to 0 !!!
	{
		printf("Invalid Input !!!");
	}
	else
	{
	scanf("%d", &n);
	printf("factorial of Numbe is : %d", fac(n));          //calling the function fac(argument n)!!! 
	}
}
