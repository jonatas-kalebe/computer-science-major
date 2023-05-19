#include<stdio.h>
 
int main()
{
    float c, f, p, mm;
    scanf("%f", &f);
    scanf("%f", &p);
    c=(f-32)*5/9;
    mm=p*25.4;
    printf("O VALOR EM CELSIUS = %.2f\n",c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);
    return 0;
}