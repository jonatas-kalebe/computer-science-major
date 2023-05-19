#include<stdio.h>
 
int main()
{
    float a, b, c, d, m;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    m=(a*d)-(b*c);
    printf("O VALOR DO DETERMINANTE E = %.2f",m);
    return 0;
}