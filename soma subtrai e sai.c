#include <stdio.h>//entrada e saida
#include <locale.h>//localizaçao
int main() {
	setlocale(LC_ALL, "");

    int numero1, numero2, opcao, res;
    do{//repetir a pergunta até que o usuario queira parar

        printf ("\nDigite um numero: ");
        scanf ("%d", &numero1);//le o numero digitado
        printf ("Digite um numero: ");
        scanf ("%d", &numero2);//le o numero digitado
        
        //menu
        printf ("1- Somar\n");
        printf ("2- Subtrair\n");
        printf("3- Sair\n");
        scanf ("%d", &opcao);
        
        
        switch(opcao){
        case 1:
        printf ("Você escolheu somar...\n");
        res = numero1 + numero2;//soma dos numeros escolhidos
        printf ("O resultado é: %d\n", res);//res para puchar o calculo
        break;
        
        case 2:
        printf ("Você escolheu subtrair...\n");
        res = numero1 - numero2;//subtração dos numeros escolhidos
        printf ("O resultado é: %d\n", res);
        break;
        
        case 3:
        printf("Você escolheu sair...\n");
        break;
        }
     
    }while (opcao != 3);//loop continua enquanto a variavel "opcao" nao for 3
  
    
    
return 0;//finaçliza a programação
}