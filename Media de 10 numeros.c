#include <stdio.h>

int main() {
    float n, soma = 0, media;
    int i;

    // loop para ler os 10 números
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &n);
        soma += n;  // guarda a soma dos números
    }

    media = soma / 10;  // faz o calculo da média

    printf("A média dos 10 números é: %.2f\n", media); // mostra o resultado para o usuario

    return 0; // finaliza o programa
}