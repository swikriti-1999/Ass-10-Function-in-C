#include<stdio.h>
int fact(int n);
int comb(int n,int r);
int main()
{
    int n,r,f;
    printf("\n enter a value for n and r ");
    scanf("%d %d",&n,&r);
    f=comb(n,r);
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
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}