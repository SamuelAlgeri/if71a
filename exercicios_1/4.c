/*4. Modifique o programa anterior para que leia primeiro o tipo int e depois os outros, ou seja, conforme exemplo mostrado
abaixo. Veja que a nova ordem vai dar problema na leitura do tipo char. Você consegue corrigir o erro de forma que
a ordem int, char e float possa ser respeitada?
1 # include < stdio .h >
2 int main ()
3 {
4 int i;
5 float f;
6 char c;
7
8 printf (" Digite um valor inteiro : ") ;
9 scanf () ; // complete o comando para ler a variável i
10 printf (" Digite um caractere : ");
11 scanf () ;// complete o comando para ler a variável c
12 printf (" Entre com um numero de ponto flutuante ( valor nao inteiro ): ");
13 scanf () ;// complete o comando para ler a variável f
14 printf () ; // imprimeir as variável
15
16 return 0;
17 }*/
#include <stdio.h>

int main(){

    int i;
    float f;
    char c;
    printf(" Digite um valor inteiro : ");
    scanf("%i", &i); // complete o comando para ler a variável i
    printf(" Digite um caractere : ");
    scanf(" %c", &c); // complete o comando para ler a variável c
    printf(" Entre com um numero de ponto flutuante ( valor nao inteiro ): ");
    scanf("%f", &f);  // complete o comando para ler a variável f
    printf("Inteiro: %i\nFloat: %f\nCaracter: %c\n", i, f, c); // imprimeir as variável
    return 0;
}