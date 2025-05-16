#include <stdio.h>      
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero[5], i; 
 
    for (i = 0; i < 5; i++) {//loop dos 5 numeros
        printf("Digite o %dº número: ", i + 1); // i + 1 apenas para exibir primeiro, segundo, etc
        scanf("%d", &numero[i]); // Lê o número e armazena na posição i 
}
        printf ("Numeros invertidos: ");
         for(i = 4; i >= 0; i--) {//inicia no ultimo numero até o primeiro
             

    printf("%d, ", numero[i]);
}
    return 0; 
}
