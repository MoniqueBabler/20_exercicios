#include <stdio.h> //biblioteca de de entrda e saida 
#include <locale.h> //biblioteca de localização 
int main (){ // inicia o programa 
    setlocale (LC_ALL, ""); //define onde esta a localizção 
     
    int numero; //int declara um valor inteiro e a variavel usada para armazenar o valor do usuario 

    printf ("Digite um número inteiro: "); //exibe a mensagem para o usuario 

    scanf ("%d", &numero); // le o  valor e armazena na variavel numero 
     
    if (numero %2 == 0) //estrutura de condição que verifica se o resto de 2 divido pelo numero é igual a  zero 
    { 
        printf ("O número %d é par", numero ); 
    } 
    else //verifica se a condição do if é verdadeira 
    { 
        printf ("O número %d é impar", numero); 
    } 
     
    return 0; //finaliza o codigo 
} 