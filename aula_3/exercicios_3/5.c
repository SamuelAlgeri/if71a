/*
5. O número 3025 possui a seguinte característica: 30 + 25 = 55 --> 55 * 55 = 3025. 
Fazer um programa para gerar todos os números de 4 algarismos com a mesma 
característica do número 3025.
*/

#include <stdio.h>

int n1, n2, i, nf, soma, multiplicacao;

int main(){
  
    for(i = 1000; i <= 9999; i++){
        n1 = i / 100;
        n2 = i % 100;
        soma = n1 + n2;
        multiplicacao = soma * soma;
        if(multiplicacao == i){
            printf("%i\n", i);
        }
    }
    return 0;
}