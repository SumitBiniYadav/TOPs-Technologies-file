#include<stdio.h>
main()
{
	int n,i;                                             //variable declared for input and loops !!!
	int nexttrm = 0;                                     //nexttrm variable to store the sum of two terms !!!
	int term1 = 0; int term2 = 1;                        //declaring 2 variable trm 1 and 2 storing 0 & 1 !!! 
	
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	
	printf("Fibonacci Series : %d , %d",term1,term2);
	
	for(i=3;i<=n;i++)                                  //intializing the loop with 3 as our term 1 and 2 are already declared !!!
	{
		nexttrm = term1+term2;                         //storing the sum of 2 terms in the variable nexttrm !!!
		printf(", %d", nexttrm);                       //printing the sum as next term !!!
		term1=term2;                                   //swapping the value of term2 to term 1 !!!
		term2=nexttrm;                                 //swapping the value of sum of terms to term 2 !!!
	}
}
