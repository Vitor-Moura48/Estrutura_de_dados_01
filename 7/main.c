#include <stdio.h>

int main()
{
    int mes;

    printf("Digite o número do mês: ");
    scanf("%d", &mes);
    
    // if else
    if (mes == 1 || mes == 3 || mes == 5 || (mes > 6 && mes < 9) || mes == 10 || mes == 12)
        {
        printf("\nEsse mês tem 31 dias");
        }
    
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
        printf("\nEsse mês tem 30 dias");
        }
    
    else
        {
        printf("\nEsse mês tem 28 dias");
        }
    
    // switch
    switch(mes)
        {
        case 1: printf("\nEsse mês tem 31 dias");
        break;
        case 2: printf("\nEsse mês tem 28 dias");
        break;
        case 3: printf("\nEsse mês tem 31 dias");
        break;
        case 4: printf("\nEsse mês tem 30 dias");
        break;
        case 5: printf("\nEsse mês tem 31 dias");
        break;
        case 6: printf("\nEsse mês tem 30 dias");
        break;
        case 7: printf("\nEsse mês tem 31 dias");
        break;
        case 8: printf("\nEsse mês tem 31 dias");
        break;
        case 9: printf("\nEsse mês tem 30 dias");
        break;
        case 10: printf("\nEsse mês tem 31 dias");
        break;
        case 11: printf("\nEsse mês tem 30 dias");
        break;
        case 12: printf("\nEsse mês tem 31 dias");
        break;
        }
    
    // ternario
    (mes == 1 || mes == 3 || mes == 5 || (mes > 6 && mes < 9) || mes == 10 || mes == 12)? 
    
        printf("\nEsse mês tem 31 dias"): (mes == 4 || mes == 6 || mes == 9 || mes == 11)?
            
            printf("\nEsse mês tem 30 dias"): printf("\nEsse mês tem 28 dias");
       

    return 0;
}





















