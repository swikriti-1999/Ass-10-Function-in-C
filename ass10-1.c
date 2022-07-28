#include<stdio.h>
float area(float r);
int main()
{
    float a,r;
    printf("\n Eneter the radius of a circle ");
    scanf("%f",&r);
    a=area(r);
    printf("\n area of a circle is %f",a);
}
float area(float r)
{
    float x;
    x=3.14*r*r;
    return x;
}