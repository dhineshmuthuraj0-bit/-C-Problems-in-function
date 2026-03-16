#include <stdio.h>
int rev(int n) {
    int r=0;
    while (n>0) {
        r = r*10 + n%10;
        n = n/10;
    }
    return r;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", rev(n));
    return 0;
}
