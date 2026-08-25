/*7. Considere o trecho de código abaixo. Ele lê um número inteiro do teclado e o imprime como se fosse um número em
ponto flutuante. Implemente o programa e observe se ocorre um erro de compilação ou um erro de execução. Qual a
correção necessária para que o programa execute sem erros?
1 # include < stdio .h >
2 int main () {
3 int aux ;
4
5 printf (" Digite um numero inteiro : ");
6 scanf ("%d", & aux );
7 printf ("%f", aux );
8 return 0;
9 }*/
#include <stdio.h>

int main(){
    int aux;
    printf(" Digite um numero inteiro : ");
    scanf("%i", &aux);
    printf("%i", aux); // alterar o tipo de variavel
    return 0;
}
