#include<stdio.h>
int factorial(int);
void main()
{
    int n,f;
    printf("Enter the number whose factorial you want to calculate?");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial=%d",f);
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;

    }
    else if (n==1)
    {
        return 1;

    }
    else
    {
        return n*factorial(n-1);

    }
    return 0; 
}