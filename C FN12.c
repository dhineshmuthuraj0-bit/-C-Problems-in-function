#include <stdio.h>
int check(int n) {
    if (n%4==0 && n%100!=0 || n%400==0) {
        printf("Leap Year");
    }
    else {
        printf("Not Leap Year");
    }
    return n;
}
int main() {
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}
