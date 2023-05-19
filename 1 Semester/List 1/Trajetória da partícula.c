#include<stdio.h>
#include<math.h>
 
int main()
{
    float z, x1, x2;
    int a, b, c, f,q;
    scanf("%d %d %d", &a, &b, &c);
    f=(a+b+c)%3;
    q=c%2;
 
    z=(b*b)-(4*a*c);
    if(z>=0)
    {
        x1=(-b+sqrt(z))/(2*a);
        x2=(-b-sqrt(z))/(2*a);
        if (x2>5 ||x2<-5|| x1>5 ||x1<-5)
        {
            printf("POSICOES: X1=%.2f e X2=%.2f (FORA DO EXPERIMENTO)\n",x1, x2);
            if(f==0)
            {
                printf("FATO1: DESAPARECIDA\n");
            }
            if(q==0 && c<(a+b))
            {
                printf("FATO2: ORIGEM\n");
 
            }
        }
        else
        {
            printf("POSICOES: X1=%.2f e X2=%.2f\n",x1, x2);
            if(f==0)
            {
                printf("FATO1: DESAPARECIDA\n");
            }
            if(q==0 && c<(a+b))
            {
                printf("FATO2: ORIGEM");
 
            }
 
        }
        
    }
    else
    {
        printf("POSICOES IMAGINARIAS");
    }
 
    return 0;
}