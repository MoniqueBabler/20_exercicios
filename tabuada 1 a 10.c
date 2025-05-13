#include <stdio.h>//entrada e saida
#include <locale.h>//localizaçao
int main() {
	setlocale(LC_ALL, "");

int tabuada, i, res;
    printf ("Digite um número para gerar a tabuada: ");
    scanf ("%d", &tabuada);
    
    printf ("\n Tabuada do %d", tabuada);
    
for (i = 0; i <= 10; i++){//inicia no 0 e roda até o 10
    printf ("\n %d x %d = %d", tabuada, i, res = tabuada*i);// faz o calculo do %d que é o numero x %d da repetição e depois o cauculo

}
return 0;//finaçliza a programação
}