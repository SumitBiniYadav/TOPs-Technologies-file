#include<stdio.h>
//homework practice
int main()
{
	//que.1 write a program to print the average of 3 numbers..
	int a,b,c;
	
	printf("Enter no.1 : ");
	scanf("%d", &a);
	
	printf("Enter no.2 : ");
	scanf("%d", &b);
	
	printf("Enter no.3 : ");
	scanf("%d", &c);
	
	printf("Average of abc are : %d", (a+b+c)/3);
	
	//write a program to print the smallest number...
	
	int x,y, smallest;
	
	printf("\nEnter no.1 : ");
	scanf("%d", &x);
	
	printf("\nEnter no.2 : ");
	scanf("%d", &y);
	
	smallest = (x<y) ? x : y;
	printf("\nthe smallest number is : %d", smallest);	
	
	
	return 0;
}
