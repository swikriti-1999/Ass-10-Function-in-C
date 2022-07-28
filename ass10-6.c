#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("\n enter a number to find factorial ");
    scanf("%d",&n);
    f=fact(n);
    printf("\n factorial of entered number is : %d",f);
return 0;
}
int fact(int n)
{
    int i,p=1;
    for(i=n;i>=1;i--)
    {
        p=p*i;
    }
    return p;
}