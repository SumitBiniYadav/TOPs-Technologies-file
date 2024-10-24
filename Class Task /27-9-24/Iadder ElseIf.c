#include<stdio.h>

int main()
{
    int Num;
    printf("Enter a Number : ");
    scanf("%d", &Num);
    
    if (Num %2==0) //frist priority...
    {
        printf("The Number is even\n %d", Num);
    }
    else
    {
        printf("The Number is odd\n %d", Num);
    }
    return 0;
}
  
