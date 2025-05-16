#include <stdio.h>      
#include <locale.h>

struct produtos {
    char nome[50];//armazena o nome
    float preco;//armazena a idade
    int quantidade;//armazena a nota

};

int main() {
    setlocale(LC_ALL, "");
  struct produtos produtos[5];  //declara uma variável do tipo struct produtos
int i;
float total;

    
    for (i = 0; i < 5; i++){
    printf("\nDigite o nome do produto: ");
    getchar();
    scanf ("%[^\n]", produtos[i].nome);  //le o nome com espaços

    printf("Digite o preço: ");
    scanf("%f", &produtos[i].preco);  //le o preço

    printf("Digite a quantidade: ");
    scanf("%d", &produtos[i].quantidade);  //le a quantidade
    }


 printf("\n Resumo dos Produtos \n");
    for (i = 0; i < 5; i++) {
     total = produtos[i].preco * produtos[i].quantidade;//calcula o preço x a quantidade de cada produto

        //mostra o resumo completo
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preço: R$ %.2f\n", produtos[i].preco);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Total: R$ %.2f\n", total);
    }
    return 0; 
}
