#include <stdio.h>//entrada e saida
#include <locale.h>//localizaçao
int main() {
	setlocale(LC_ALL,"");
	int operacao;
	float n1, n2, conta;

	printf("Digite o primeiro número: ");//pede um numero
	scanf("%f", &n1);//le o numero digitado

	printf("Digite o segundo número: ");
	scanf("%f", &n2);

	printf("Selecione o operador matematico (1-4):\n");//mostra o menu para o usuario
	printf("1 - +\n");
	printf("2 - -\n");
	printf("3 - /\n");
	printf("4 - *\n");
	scanf("\n%d", &operacao);//guarda na variavel operação

	switch(operacao){//puxa as opçoes do menu 
	case 1:
		conta = n1 + n2;//soma os numeros do usuario
		printf("\nVocê escolheu o sinal de adicao:\n");
		printf("O resultado é %.2f", conta);
		break;// encerra a execução do caso 1

	case 2:
		conta = n1 - n2;//subtrai os numeros
		printf("\nVocê escolheu o sinal subtração:\n");
		printf("O resultado é %.2f", conta);
		break;

	case 3:
		conta = n1 / n2;//divide os numeros
		printf("\nVocê escolheu o sinal de divisão:\n");
        printf("O resultado é %.2f", conta);
		break;

	case 4:
		conta = n1 * n2;//multiplica os numeros
		printf("\nVocê escolheu o sinal de multiplicação:\n");
		printf("O resultado é %.2f", conta);
		break;

	default://caso nenhum for selecionado da erro
		printf("Operação Invalida! Programa Encerrado");
	
	}
	return 0;
}