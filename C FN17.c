#include<stdio.h>
#include<math.h>

void arm(int n)
{
    int t=n,c=0,s=0;
    while(t>0){c++;t/=10;}
    t=n;
    while(t>0){s+=pow(t%10,c);t/=10;}
    if(s==n) printf("Armstrong");
    else printf("Not Armstrong");
}
int main()
{
    int n;
    scanf("%d",&n);
    arm(n);
    return 0;
}
