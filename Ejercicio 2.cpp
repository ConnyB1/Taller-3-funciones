#include <stdio.h>

int calcularfactorial(int num);

int main()
{
    int num, n=1, res;
    while(n==1)
    {
        printf("Dame un numero entero para darte su facctorial: ");
        scanf("%d",&num);
        res = calcularfactorial(num);
        printf("\n\n%d",res);
        printf("\n\nDesea calcular otro factorial? ");
        printf("\n1)si\t2)no");
        scanf("%d",&n);

    }
}

int calcularfactorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return num * calcularfactorial(num - 1);
    }
}