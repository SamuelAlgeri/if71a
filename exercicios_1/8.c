/*8. Considere o programa abaixo. Ele lê um caractere e o imprime como se fosse um número inteiro. Que número é esse
exibido pelo programa? É um erro de execução ou ele tem algum significado?
1 # include < stdio .h >
2 int main () {
3 char aux ;
4
5 printf (" Digite um caracter : ");
6 scanf ("%c", & aux );
7 printf ("%d", aux );
8
9 return 0;
10 }*/
#include <stdio.h>

int main(){
    char aux;
    printf(" Digite um caracter : ");
    scanf("%c", &aux);
    printf("%d", aux); // é o numero equivalente à letra que eu digitar
    printf("%c", aux); // colocando o tipo correto ele imprime a letra correta
    return 0;
}