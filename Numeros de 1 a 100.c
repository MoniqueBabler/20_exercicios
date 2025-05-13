#include <stdio.h>//entrada e saida
#include <locale.h>//localizaçao
int main() {
	setlocale(LC_ALL, "");

int i;
for (i = 1; i <= 100; i++){//i vale 1, enquanto i for menor ou igual a 100, adiciona masi 1
    printf ("\n Número: %d",i);//mostra os numeros na variavel i
}
return 0;//finaçliza a programação
}