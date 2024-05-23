#include <stdio.h>

int main()

{
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if(idade > 4 && idade < 8){
        printf("Infantil A");
        
        }
    else if(idade > 7 && idade < 11){
        printf("Infantil B");
        
        }
    else if(idade > 10 && idade < 14){
        printf("Juvenil A");
        
        }
    else if(idade > 13 && idade < 18){
        printf("Juvenil B");
        
        }
    else{
        printf("Adulto");
        
        }
    

    return 0;
}

