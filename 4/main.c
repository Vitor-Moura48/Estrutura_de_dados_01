#include <stdio.h>

int main()
{
    
    char operacao;
    float primeiro_numero, segundo_numero, resultado;
    
    printf("digite o primeiro número da operação: ");
    scanf("%f", &primeiro_numero);
    
    printf("digite o segundo numero da operação: ");
    scanf("%f", &segundo_numero);
    
    printf("Digite uma operação para fazer entre os números: ");
    scanf(" %c", &operacao);
    
    if(operacao == '+'){
        
        resultado = primeiro_numero + segundo_numero;
        }
        
    else if(operacao == '-'){
        
        resultado = primeiro_numero - segundo_numero;
        }
        
    else if(operacao == '/'){
        
        resultado = primeiro_numero / segundo_numero;
        }
    
    else{
        
        resultado = primeiro_numero * segundo_numero;
        }
    
    printf("\nO resultado da operação é: %f", resultado);
                

    return 0;
}

