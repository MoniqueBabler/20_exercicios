#include <stdio.h> //biblioteca de de entrda e saida 
#include <locale.h> //biblioteca de localização 

  

int main (){ // inicia o programa 

    setlocale (LC_ALL, ""); //define onde esta a localizção 

int idade;//decalra viariavel
printf ("Digite a sua idade: "); 
scanf("%d", &idade);//le a mensagem do usuario


if (idade < 16 || idade > 69){//retorna se uma das opcoes é verdadeira
printf ("Você não vota"); 
} 


 else if (idade >= 18){//maior ou igual a 18 anos vota
     printf ("Seu voto é obtigatório");
 }
 

else{//verifica se 16 ou 17 anos é opcional
    printf ("Seu voto é opcional"); 
} 

return 0; 
} 