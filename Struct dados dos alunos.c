#include <stdio.h>      
#include <locale.h>

struct aluno {
    char nome[50];//armazena o nome
    int idade;//armazena a idade
    float nota;//armazena a nota
};

int main() {
    setlocale(LC_ALL, "");
  struct aluno aluno;  //declara uma variável do tipo struct aluno

    //pede dados do aluno
    printf("Digite o nome do aluno: ");
    scanf ("%[^\n]", aluno.nome);  //le o nome com espaços

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);  //le idade

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);  //le a nota

    //mostra os dados
    printf("\nDados do aluno\n");
    printf("Nome : %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota : %.2f\n", aluno.nota);
    return 0; 
}
