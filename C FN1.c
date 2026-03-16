#include<stdio.h>

float si(int p,int r,int t)
{
    float interest;
    interest=(p*r*t)/100.0;
    return interest;
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    printf("%.2f",si(p,r,t));
    return 0;
}
