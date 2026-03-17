#include<stdio.h>

float add(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mul(float a,float b){return a*b;}
float div(float a,float b){return a/b;}

int main()
{
    float a,b;
    char c;
    scanf("%f%f %c",&a,&b,&c);
    switch(c)
    {
        case '+':
            printf("%.f",add(a,b));
            break;
        case '-':
            printf("%.f",sub(a,b));
            break;
        case '*':
            printf("%.f",mul(a,b));
            break;
        case '/':
            printf("%.f",div(a,b));
            break;
    }
    return 0;
}
