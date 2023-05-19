#include<stdio.h>
 
int main()
{
    float a, b, c, x;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    x=(b*b)-(4*a*c);
    printf("O VALOR DE DELTA E = %.2f\n",x);
    return 0;
}