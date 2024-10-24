#include<stdio.h>
int main()
{
	int n, i=1, ev=0, odd=0, sum=0,sum1=0;   //its important to declare variable to 0 to start the count from 1.
	/*
	declared the variables -
	n - stores the number entered by the user
	i - counter fot the loop, initialised to 1.
	ev - counts the number of even numbers entered by the user, initialised to 0.
	odd - counts the number of odd numbers entered by the user, initialised to 0.
	sum - stores the sum of all even numbers entered, initialised to 0.
	sum1 - stores the sum of all odd numbers entered, initialised to 0.
	*/
	
	while (i<=5)                                //Logic 
	{                                           // the loop will run 5 times because i starts from 1 and increments in each iteration until i<=5.
		printf("\nEnter number :");
		scanf("%d", &n);
		
		if(n%2==0)                             //if n%2==0 this condtion checks wheather the number is even. if true	
		{                                      
			printf("\n%d is even", n);         //it prints that the number is even. 
			ev++;                              //increments the ev count.
			sum=sum+n;                         //adds the number to the sum(which holds the sum of even numbers).
		}
		else                                  //if the number is not even (i.e, odd)
		{
			printf("\n%d is odd", n );        //it prints the number is odd.
			odd++;                            //increments the odd count. 
			sum1=sum1+n;                      //adds the number to the sum1(whuich holds the sum of odd numbers)
		}
		i++;                                  //i starts from 1 and increments each time.
	}
	printf("\nCount of even : %d",ev);        // prints the count of even number(ev).
	printf("\nCount of odd : %d",odd);        // prints the count of odd number(odd).
	printf("\nEven : %d",sum);                // prints the sum of even numbers(sum).
	printf("\nOdd  : %d",sum1);               // prints the sum of odd numbers(odd).
	return 0;
}
