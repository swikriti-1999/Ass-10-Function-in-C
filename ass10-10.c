#include <stdio.h>
void prime_factor(int n);
int main()
{
    int n;
    printf("\n enter the number ");
    scanf("%d", &n);
    prime_factor(n);
    return 0;
}
void prime_factor(int n)
{
    int i;
    for (i = 2; n!=1; i++)
    {
      while (n%i==0)
      {
        n=n/i;
        printf(" %d",i);
      }
      
    }
}