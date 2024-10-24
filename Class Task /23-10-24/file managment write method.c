#include<stdio.h>

main()
{
	FILE * ftpr;
	
	ftpr = fopen("test1.txt", "a");
	fprintf(ftpr, "\nThis is Append Method !!!");
	fclose(ftpr);
}
