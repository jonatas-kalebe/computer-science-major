#include<stdio.h>
 
int main()
{
    float salario, x;
    int a, b, c;
    scanf("%f %d %d %d", &salario, &a, &b, &c);
    x=salario/(float)a;
    if (b==2)
    {
        switch (c)
        {
        case 4:
            if(x<=1405.50)
            {
                printf("ALUNO COTISTA (L1)");
            }
            else
            {
                printf("ALUNO COTISTA (L3)");
            }
            break;
        
        default:
            if(x<=1405.50)
            {
                printf("ALUNO COTISTA (L2)");
            }
            else
            {
                printf("ALUNO COTISTA (L4)");
            }
            break;
        }
    }
    else
    {
       printf("ALUNO NAO COTISTA"); 
    }
    return 0;
}