#include<stdio.h>
 
int main()
{
    float a, b, c, x;
    int i;
    
    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    while (a>b || b>c)
    {
        if(a>b)
        {
            x=a;
            a=b;
            b=x;
        }
        if(b>c)
        {
            x=b;
            b=c;
            c=x;
        }
    }
    switch (i)
    {
    case 1:
        printf("%.2f %.2f %.2f\n",a,b,c);
        break;
    case 2:
        printf("%.2f %.2f %.2f\n",c,b,a);
        break;
    case 3:
        printf("%.2f %.2f %.2f\n",b,c,a);
        break;
    }
    return 0;
}