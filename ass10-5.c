#include<stdio.h>
void odd(int n);
int main()
{
    int n;
    printf("\n enter value for n to print n odd numbers ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    int i;
    printf("\n all odd numbers are : ");
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            printf(" %d",i);
    }
}
