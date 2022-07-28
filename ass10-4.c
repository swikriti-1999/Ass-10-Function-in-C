#include<stdio.h>
void print(int n);
int main()
{
    int n;
    printf("\n enter the value for n to print natural numbers ");
    scanf("%d",&n);
    print(n);
return 0;
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf(" %d",i);
    }
}