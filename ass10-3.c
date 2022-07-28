#include<stdio.h>
int check(int n);
int main()
{
    int n,x;
    printf("\n enter any number ");
    scanf("%d",&n);
    x=check(n);
    if(x==1)
        printf("\n number is even");
    else
        printf("\n number is odd");
return 0;
}
int check(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}