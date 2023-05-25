#include <stdio.h>
#include <stdlib.h>
int eh_primo(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int n;
    printf("Insira o tamanho da impressao de numeros primos: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (eh_primo(i))
            printf("%d\n", i);
    }
    return 0;
}
