#include <stdio.h>      
#include <locale.h>

struct Aluno {
    char nome[50];//armazena o nome
    float nota1, nota2, nota3;//armazena as notas
    float media;//armazena a media
};

int main() {
    setlocale(LC_ALL, "");
    struct Aluno aluno;

    //leitura dos dados
    printf("Digite o nome do aluno: ");
    getchar();
    scanf("%[^\n]",aluno.nome);
    
    printf("Digite a 1ª nota:  ");//pede a primeira nota
    scanf("%f", &aluno.nota1);
   
    printf("Digite a 2ª nota: ");//pede a segunda nota
    scanf("%f", &aluno.nota2);

    printf("Digite a 3ª nota: ");//pede a terceira nota
    scanf("%f", &aluno.nota3);

    // calcula a média
    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

   // mostra o resultado
    printf("\n Resultado \n");
    
    printf("Média: %.2f\n", aluno.media);

//verifica se o aluno tem media maior que 7
    if (aluno.media >= 7.0) {
        printf("Situação: Aprovado\n");
        //se for menor que 7 ele reprova
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;  // finaliza o programa
}