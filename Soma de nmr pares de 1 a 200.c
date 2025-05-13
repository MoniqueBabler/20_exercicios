#include <stdio.h>//entrada e saida
#include <locale.h>//localizaçao
int main() {
	setlocale(LC_ALL, "");

int soma = 0, i;
for (i = 1; i <= 200; i++){//passa de 1 ate 200
    if (i % 2 == 0 ){//verifica quais numeros divido por dois resta 0
        soma+=i;//soma eles
    }
}
    printf ("a soma dos numeros pares de 1 a 200 é: %d", soma);
    
    
    
return 0;//finaçliza a programação
}