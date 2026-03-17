#include<stdio.h>
int main()
{
    int n, factorial=1;
    printf("Enter the no. to find factorial:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("factorial of given no. is :%d", factorial);
    return 0;
}