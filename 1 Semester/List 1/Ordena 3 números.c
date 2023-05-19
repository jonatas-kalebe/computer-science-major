#include<stdio.h>
 
int main()
{
    float a, b, c, x;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    while (a>b || b>c)
    {
   
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    if(a>c)
    {
        x=a;
        a=c;
        c=x;
    }
    if(b>c)
    {
        x=b;
        b=c;
        c=x;
    }
    }
 
    printf("%.2f, %.2f, %.2f", a, b, c);
    return 0;
}