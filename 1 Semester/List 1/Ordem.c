#include<stdio.h>
 
int main()
{
    int x1, x2, x3, x;
    scanf("%d %d %d\n", &x1, &x2, &x3);
    char a, b, c;
    scanf("%c%c%c", &a,&b,&c);
 
    while (x1>x2 || x2>x3)
    {
        if(x1>x2)
        {
            x=x1;
            x1=x2;
            x2=x;
        }
        if(x1>x3)
        {
            x=x1;
            x1=x3;
            x3=x;
        }
        if(x2>x3)
        {
            x=x2;
            x2=x3;
            x3=x;
        }
    }
 
switch (a)
{
case 'A':
    printf("%d",x1);
    break;
case 'B':
    printf("%d",x2);
    break;
case 'C':
    printf("%d",x3);
    break;
default:
    break;
}
switch (b)
{
case 'A':
    printf(" %d",x1);
    break;
case 'B':
    printf(" %d",x2);
    break;
case 'C':
    printf(" %d",x3);
    break;
default:
    break;
}
switch (c)
{
case 'A':
    printf(" %d\n",x1);
    break;
case 'B':
    printf(" %d\n",x2);
    break;
case 'C':
    printf(" %d\n",x3);
    break;
default:
    break;
}
 
    return 0;
 
}