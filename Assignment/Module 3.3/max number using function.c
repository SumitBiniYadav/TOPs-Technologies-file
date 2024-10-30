#include<stdio.h>

maxnum(int a)                        //function to find the maximum digit !!!!
{
	int max = 0;                    //decleration of int max initialised to 0 !!!!
	while(a>0)                      //loop runs until the number is less than 0;
	{
		int r = a % 10;             //getting the last digit !!!!
		if (r > max )               //comparing it from the max variable !!!!
		{
			max = r;                // if its grater than the current value in max it replaces it !!!!
		}
		a = a / 10;                 //removes the last digit from the number !!!!
	}
	return max;                     //returns the max variables as solution !!!!
}

int main()
{
	int a;                         //decleration of variable a to store the numbers to it !!!!
	printf("Enter a Number : ");   //prompt : to store the input from the user !!!!
	scanf("%d", &a);               
	
	printf("The maximum Number is : %d", maxnum(a)); //calling the function and printing it or displaying it !!!!
}
