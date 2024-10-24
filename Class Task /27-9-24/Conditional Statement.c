#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    
    if (age >= 18)
    {
        printf("Eligible for vote\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}

