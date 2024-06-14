#include <stdio.h>

float potencia(float x, int n)
    {
    float resultado;
    resultado = 1;
    
    for(n; n > 0; n--)
        resultado *= x;
    
    return resultado;
    }

int main()
    {
    float x;
    int n;
    
    printf("Digite o valor: ");
    scanf("%f", &x);
    printf("\nDigite a potência: ");
    scanf("%d", &n);
    
    printf("\n%.2f", potencia(x, n));
    
    return 0;
    }




