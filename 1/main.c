# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// criando os tipos para as estruturas
typedef struct celula{
    char caractere;
    struct celula *sob;
}celula;

typedef struct pilha{
    celula *topo;
}pilha;


// preenche ou adiciona celulas na pilha
void preencher_pilha(pilha *pilha)
{
    char *vetor = (char*) malloc(sizeof(char));
    celula *nova_celula;

    printf("Digite algo: ");
    gets(vetor);

    for(;*vetor != '\0'; vetor++)
    {
        nova_celula = (celula*) malloc(sizeof(celula));
        nova_celula->caractere = *vetor;

        if (pilha->topo == NULL)
        {
            nova_celula->sob = NULL;
            pilha->topo = nova_celula;
        }

        else
        {
            nova_celula->sob = pilha->topo;
            pilha->topo = nova_celula;
        }
    }
}


// imprime a pilha do topo para o fim
void imprimir_inverso(pilha *pilha)
{
    celula *celula_atual;

    printf("\nOrdem inversa: ");
    for(celula_atual = pilha->topo; celula_atual != NULL; celula_atual = celula_atual->sob)
    {
        printf("%c", celula_atual->caractere);
    }

}


// remove caracteres especiais e aplica caixa baixa em 'todos'
void normatizar(pilha *pilha1, pilha *pilha_limpa)
{
    celula *celula_atual_pilha;
    celula *celula_atual_pilha_limpa;

    char caracteres_especiais[] = {'!', '@', '#', '$', '%', ' ', '&', '*', '(', ')', '_', '-', '+', '=', '/', '~', '^', ']', '[', '{', '}', '>', '<', '.', ',', ':', ';', '\0'};

    // criando uma pilha sem caracteres especiasis
    for (celula_atual_pilha = pilha1->topo; celula_atual_pilha != NULL; celula_atual_pilha = celula_atual_pilha->sob)
    {
        celula_atual_pilha_limpa = (celula*) malloc(sizeof(celula));
        int eliminar=0;

        for(int i=0; caracteres_especiais[i] != '\0'; i++)
        {
            if (celula_atual_pilha->caractere == caracteres_especiais[i])
            {
                eliminar = 1;
                break;
            }    
        }

        if (eliminar == 0 && celula_atual_pilha == pilha1->topo)
        {
            celula_atual_pilha_limpa->caractere = celula_atual_pilha->caractere;
            celula_atual_pilha_limpa->sob = NULL;
            pilha_limpa->topo = celula_atual_pilha_limpa;
        }

        else if (eliminar == 0)
        {
            celula_atual_pilha_limpa->caractere = celula_atual_pilha->caractere;
            celula_atual_pilha_limpa->sob = pilha_limpa->topo;
            pilha_limpa->topo = celula_atual_pilha_limpa;
        }
    }

    for(celula_atual_pilha_limpa = pilha_limpa->topo; celula_atual_pilha_limpa != NULL; celula_atual_pilha_limpa = celula_atual_pilha_limpa->sob)
    {
        if (celula_atual_pilha_limpa->caractere >= 65 && celula_atual_pilha_limpa->caractere <= 90)
        {
            celula_atual_pilha_limpa->caractere += 32;
        }
    }
}


//verifica se a palavra ou frase é igual independente do sentido de leitura (ignorando pontuações e caixa alta)
void palindromo(pilha *pilha1)
{
    pilha *pilha_limpa = (pilha*) malloc(sizeof(pilha));
    celula *celula_atual_pilha_limpa;

    celula *celula_atual_pilha;
    celula *celula_atual_pilha_inversa;
    int palindromo=1;

    normatizar(pilha1, pilha_limpa);

    // verificando se a lista é um palindromo
    for(celula_atual_pilha_inversa = pilha_limpa->topo; celula_atual_pilha_inversa != NULL; celula_atual_pilha_inversa = celula_atual_pilha_inversa->sob)
    {
        celula_atual_pilha = pilha_limpa->topo;
        while(celula_atual_pilha->sob != NULL && celula_atual_pilha->sob->sob != NULL)
        {
            celula_atual_pilha = celula_atual_pilha->sob;
        }

        if (celula_atual_pilha_inversa->caractere != celula_atual_pilha->sob->caractere)
        {
            palindromo=0;
            break;
        }

        celula_atual_pilha->sob = NULL;
    }

    // printando o resultado
    (palindromo == 1)? printf("\n\nÉ um palindromo!") : printf("\n\nNão é um palindromo!");
}


// função principal
void main()
{

    pilha *pilha1 = (pilha*) malloc(sizeof(pilha));
    pilha1->topo = NULL;

    preencher_pilha(pilha1);
    imprimir_inverso(pilha1);

    palindromo(pilha1);
}