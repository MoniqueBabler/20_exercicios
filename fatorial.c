#include <stdio.h>//entrada e saida
#include <locale.h>//localização
int main (){
    setlocale (LC_ALL, "");
    int n, i, c=1;
    printf ("informe um numero: ");
    scanf ("%d", &n);
    
    for(i=1; i<=n;i++){//começa em 1 e repete até ser menor ou igual ao "numero q o o usuario escolheu
        c*=i;}//a cada passo c recebe o valor atual multiplicado por i
        printf ("O fatorial é: %d", c);
       
    
     return 0;
    
}