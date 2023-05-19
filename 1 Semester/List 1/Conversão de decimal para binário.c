#include<stdio.h>
 
int main()
{
    int valor, x;
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
    int a5=0;
    int a6=0;
    int a7=0;
    int a8=0;
 
    scanf("%d",&valor);
    if (valor<0 ||valor>255){
        printf("Numero invalido!");
        return 0;
    }
    a8=valor%2;
    valor=valor/2;
    a7=valor%2;
    valor=valor/2;
    a6=valor%2;
    valor=valor/2;
    a5=valor%2;
    valor=valor/2;
    a4=valor%2;
    valor=valor/2;
    a3=valor%2;
    valor=valor/2;
    a2=valor%2;
    valor=valor/2;
    a1=valor%2;
    printf("%d%d%d%d%d%d%d%d",a1,a2,a3,a4,a5,a6,a7,a8);
    
    
    return 0;
}