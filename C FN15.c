#include <stdio.h>
void table(int n) {
    int i;
    for (i = 1; i <=10; i++)
        printf("%d*%d=%d\n",i,n,n*i);
}
int main() {
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}
