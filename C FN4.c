#include<stdio.h>

float area(int r)
{
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("%.2f",area(r));
    return 0;
}
