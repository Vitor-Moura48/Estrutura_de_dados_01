#include <stdio.h>

// função principal
int main()

{
    
    // declarando variaveis
    int idade, dias;
    
    // obtendo valores de input
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    // calculando um resultado e printando na tela
    dias = idade * 365;
    printf("\nVocê já viveu aproximadamente: %d dias", dias);
    
}
