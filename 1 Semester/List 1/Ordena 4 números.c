#include<stdio.h>
 
int main()
{
    float a, b, c, d, x;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
 
    while (a>b || b>c || c>d)
    {
   
    if(a>b){
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
    if(c>d)
    {
        x=c;
        c=d;
        d=x;
    }
    }
 
    printf("%.2f, %.2f, %.2f, %.2f", a, b, c, d);
    return 0;
}