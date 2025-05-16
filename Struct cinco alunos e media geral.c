#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[50]; 
    float media;  
};

int main() {
    setlocale (LC_ALL,""); 
    struct Aluno alunos[5]; 
    int i;
    float soma = 0, mediaGeral;

    //cadastro dos 5 alunos
    for (i = 0; i < 5; i++) {
        printf("\nCadastro do %dº aluno\n", i + 1);

        printf("Nome: ");
        getchar();  //limpar o buffer de entrada
        scanf("%[^\n]", alunos[i].nome);//le o nome do aluno com espaços

        printf("Média final: ");
        scanf("%f", &alunos[i].media);//le a média do aluno
        getchar();

        soma += alunos[i].media;  //soma das médias dos alunos
    }

    //calcula a média de todos
    mediaGeral = soma / 5;

    //mostra a média da turma
    printf("\nMédia geral da turma: %.2f\n", mediaGeral);

    return 0;