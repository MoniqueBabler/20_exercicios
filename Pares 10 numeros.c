#include <stdio.h>      
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero[10], i, par = 0; 
 
    for (i = 0; i < 10; i++) {
        
        printf("Digite o %dº número: ", i + 1); // i + 1 apenas para exibir primeiro, segundo, etc
        scanf("%d", &numero[i]); // Lê o número e armazena na posição i 

        // Verifica se o número é par
        if (numero[i] % 2 == 0) {
            par++; // Se for par, idiciona o contador de pares
        }
    }

    printf("Você digitou %d números pares.\n", par);

    return 0; 
}
