#include <stdio.h>
int perfect(int n) {
    int s=0,i;
    for(i=1;i<n;i++)
        if(n%i==0)
            s+=i;
        if (s==n)
            printf("Perfect Square");
        else
            printf("Not Perfect Square");
}
int main() {
    int n;
    scanf("%d",&n);
    perfect(n);
    return 0;
}
