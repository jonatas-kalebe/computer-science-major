#include<stdio.h>
#include<math.h>
 
int main()
{
    float a, b, c, z, x1, x2, f;
    scanf("%f %f %f", &a, &b, &c);
    z=(b*b)-(4*a*c);
    if(z>0)
    {
        x1=(-b+sqrt(z))/(2*a);
        x2=(-b-sqrt(z))/(2*a);
        if (x2>x1)
        {
            f=x2;
            x2=x1;
            x1=f;
        }
        printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f", x2, x1);
        return 0;
    }
    if(z==0)
    {
        x1=(-b+sqrt(z))/(2*a);
        printf("RAIZ UNICA\nX1 = %.2f", x1);
 
    }
    else
    {
        printf("RAIZES IMAGINARIAS");
    }
 
    return 0;
}