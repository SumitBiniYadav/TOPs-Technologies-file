#include<stdio.h>
//WAP area of square, rectangle and triangle.. 
int main()
{
	//area of circle..
	int radius;
	printf("Enter Radius : ");
	scanf("%d", &radius);
	
	printf("Area of circle is : %.2f", (float) 3.14*radius*radius);
	
	
	//area of rectangle..
	int b,c;
	printf("\nEnter Length : ");
	scanf("%d", &b);
	
	printf("\nEnter Breadth : ");
	scanf("%d",&c);
	
	printf("\nThe area of a rectangle is : %d", b*c);
	
	
	//area of a triangle..
	int k,l;
	printf("\nEnter Breadth : ");
	scanf("%d", &k);
	
	printf("\nEnter Height : ");
	scanf("%d",&l);
	
	printf("\nThe Area of Triangle is : %.2f",(float)1/2*(k*l)); // type casting the result to foat as the ans can not be displayed in form of integer..
	return 0;
}
