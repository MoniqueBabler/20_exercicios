#include <stdio.h>      
#include <locale.h>

struct Pessoa {
    char nome[50];//armazena o nome
    int idade;//armazena a idade

};

int main() {
    setlocale(LC_ALL, "");
    struct Pessoa pessoa1, pessoa2;

    //leitura dos dados da primeira pessoa
    printf("Digite o nome da 1ª pessoa: ");
    getchar();
    scanf("%[^\n]",pessoa1.nome);
    printf("Digite a idade da 1ª pessoa: ");
    scanf("%d", &pessoa1.idade);
   

    //leitura dos dados da segunda pessoa
    printf("\nDigite o nome da 2ª pessoa: ");
    getchar();
    scanf("%[^\n]",pessoa2.nome);
    printf("Digite a idade da 2ª pessoa: ");
    scanf("%d", &pessoa2.idade);

    //comparação das idades
    printf("\n--- Resultado ---\n");
    if (pessoa1.idade > pessoa2.idade) {//verifica se a pessoa 1 é mais velha
        printf("%s é mais velha.\n", pessoa1.nome);
    } 
    
    else if (pessoa2.idade > pessoa1.idade) {//verifica se a pessoa 2 é mais velha
        printf("%s é mais velha.\n", pessoa2.nome);
    } 
    
    else {//se as duas de cima for falsa significa que elas tem a mesma idade
        printf("As duas pessoas têm a mesma idade.\n");
    }

    return 0;
}