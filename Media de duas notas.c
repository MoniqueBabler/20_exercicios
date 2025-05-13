#include <stdio.h> //biblioteca de de entrda e saida 
#include <locale.h> //biblioteca de localização 
int main (){ // inicia o programa 

    setlocale (LC_ALL, ""); //define onde esta a localizção 
     
float nota, i, media; 


for (i = 0; i < 2; i++){//repete a pergunta 2x, para digitar a nota 
printf ("Digite a nota: "); 
scanf("%f", &nota); 

} 
media = (nota + nota) / 2;// faz o calculo das notas, somando as duas e dividindo por 2

if (nota >= 7){//verifica se o culculo resulta em 7 ou mais 
printf ("O aluno foi aprovado");//se de r 7 ou mais aprova
} 
else{//verifica que se for menor reprova

    printf ("O aluno foi reprovado"); 

} 
return 0; //finaliza o programa
} 