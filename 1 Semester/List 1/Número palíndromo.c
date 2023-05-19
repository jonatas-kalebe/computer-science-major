#include<stdio.h>
 
int main()
{
    int x, a,b,c,d,e;
    scanf("%d",&x);
    if(x>99999)
    {
        printf("NUMERO INVALIDO");
        return 0;
    }
    a=x/10000;
    b=(x%10000)/1000;
    c=((x%10000)%1000)/100;
    d=(((x%10000)%1000)%100)/10;
    e=((((x%10000)%1000)%100)%10);
    if (a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                if(d==0)
                {
                  printf("PALINDROMO");  
                }
                else if (d==e)
                {
                    printf("PALINDROMO");
                }
                else
                {
                    printf("NAO PALINDROMO");
                }
                
            }
            else if (c==e)
            {
                printf("PALINDROMO");
            }
            else
            {
                printf("NAO PALINDROMO");
            }
            
 
        }
        else if (b==e && c==d)
        {
            printf("PALINDROMO");
        }
        else
            {
            printf("NAO PALINDROMO");
            }
 
    }
    else if (a==e && b==d)
    {
        printf("PALINDROMO");
    }
    else
    {
        printf("NAO PALINDROMO");
    }
 
        return 0;
}