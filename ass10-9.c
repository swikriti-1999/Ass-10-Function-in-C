#include <stdio.h>
int main()
{
    int n, d, x;
    printf("\n enter any number ");
    scanf("%d", &n);
    printf("\n enter a digit u want to find in given number ");
    scanf("%d", &d);
    x = num(n, d);
    if (x == 1)
        printf("\n digit found");
    else
        printf("\n digit not found");
    return 0;
}
int num(int n, int d)
{
    int rem;
    while (n != 0)
    {
        n = n / 10;
        rem = n % 10;
        if (rem == d)
            return 1;
        else
            return 0;
    }
}