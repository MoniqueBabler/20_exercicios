#include <stdio.h> //biblioteca de de entrda e saida 
#include <locale.h> //biblioteca de localização
int main (){ // inicia o programa 
    setlocale (LC_ALL, ""); //define onde esta a localizção 
     
     
int n1, n2;//decalra numero inteiro

printf ("Digite o primero número: ");//mostra pra o usuario 
scanf ("%d", &n1);//le o numero 
printf ("Digite o segundo número: "); 
scanf ("%d", &n2); 

if (n1 > n2)//verifica se o n1 é maior q o n2 
{ 
    printf ("\nO número %d é o maior", n1); 
} 
else {//se for falso significa que o n2 é maior 

    printf ("\nO número %d é o maior", n2); 

} 
return 0; 
} 