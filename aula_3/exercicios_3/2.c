/*
2. Leia um valor inteiro n. Apresente todos os números de 1 a 100 
que divididos por n dão resto igual a 2.
*/

#include <stdio.h>

int n, resultado, i;

int main(){

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\nOs numeros divididos por %i que tem resto 2 são: \n", n);
    for(i = 1; i <= 100; i++){
        resultado = i % n;
        if(resultado == 2){
            printf("%i\n", i);
        }
    }
    
    return 0;
}