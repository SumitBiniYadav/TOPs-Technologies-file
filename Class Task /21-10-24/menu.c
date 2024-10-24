#include<stdio.h>

strleng()
{
	char a[5];
	
	printf("Enter A String : ");
	gets(a);
	
	int i, len=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("%d", len);
}

strcpy()
{
	char a[10], b[10];
	
	printf("Enter a String : ");
	gets(a);
	
	int i;
	
	for(i=0;a[i]!='\0'; i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	
	printf("copy : %s", b);
}

concat()
{
	char a[10];
	char b[10];
	
	printf("Enter a String :");
	gets(a);
	
	printf("Enter a String :");
	gets(b);
	
	int i,j;
	
	for(i=0;a[i]!='\0'; i++);
	
	for(j=0;b[j]!='\0'; j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("Merge String : %s", a);
}

comp()
{
	char b[10],a[10];
	
	printf("Enter A String : ");
	gets(a);
	
	printf("Enter A String : ");
	gets(b);
	
	int result = strcmp(a,b);
	
	printf("Result is : %d", result);
}


main()
{
	int n;
	
	printf("Press 1 For String length !!!!");
	printf("\nPress 2 For String copy !!!!");
	printf("\nPress 3 For String concate !!!!");
	printf("\nPress 4 For String comparision !!!!");
	printf("\nPress 5 For Exit !!!!");
	
	printf("\nPlease Enter Your Choice : ");
	scanf("%d", &n);
	
	if(n==1)
	{
		strleng();
	}
	else if(n==2)
	{
		strcpy();
	}
	else if(n==3)
	{
		concat();
	}
	else if(n==4)
	{
		comp();
	}
	else if(n==5)
	{
		printf("\nThank You !!!");
	}
	else
	{
		printf("\nInvalid Input !!!");
	}
}

