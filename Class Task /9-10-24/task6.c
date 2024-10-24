#include<stdio.h>
int main()
{
	int a[3][3]={{6,9,10},{3,8,2},{6,8,9}}
	int i,j;
	
	for(i=0;i<3;i++) //row 
	{
		for(j=0;j<3;j++) //column
		{
			printf("%d\n", a[i][j]);
		}
	}
	return 0;
}
