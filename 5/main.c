#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int primeiro, segundo, terceiro;
    
    printf("Digite 3 números: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    (n1 < n2 && n1 < n3)? primeiro = n1: ((n2 < n3)? primeiro = n2 : (primeiro = n3));
    
    (n1 > n2 && n1 > n3)? terceiro = n1: ((n2 > n3)? terceiro = n2 : (terceiro  = n3));
     
    (n1 != primeiro && n1 != terceiro)? n1 = segundo : ((n2 != primeiro && n2 != terceiro)? segundo = n2 : (segundo = n3));
 
    
    printf("%d < %d < %d", primeiro, segundo, terceiro);
    
    return 0;
}

