#include<stdio.h>
 
int main()
{
    unsigned int n1, n2, n3, x, z;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if (n1<0 || n1>9 || n2<0 || n2>9 ||n3<0 || n3>9)
    {
        printf("DIGITO INVALIDO");
        return 0;
    }
    n1=n1*100;
    n2=n2*10;
    x=n1+n2+n3;
    z=x*x;
    printf("%d, %d", x , z);
    return 0;
}