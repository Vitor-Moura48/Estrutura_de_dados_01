# include <stdio.h>

int main()
	
{
	char palavra[256], i;
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
    for (i = 0; palavra[i] != '\0'; i++)
        {
        printf("\nletra: %c - ASCII: %d", palavra[i], palavra[i]);    
        }
	
	return 0;
}
