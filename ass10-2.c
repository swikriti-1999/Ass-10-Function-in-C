#include<stdio.h>
float s(float r,float p,float t);
int main()
{
    float r,p,t,si;
    printf("\n enter the rate of interest ");
    scanf("%f",&r);
    printf("\n enter the principle ");
    scanf("%f",&p);
    printf("\n enter the rate of time ");
    scanf("%f",&t);
    si=s(r,p,t);
    printf("\n simple interest is %f",si);
return 0;
}
float s(float r,float p,float t)
{
    float x;
    x=(r*p*t)/100;
    return x;
}