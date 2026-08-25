/*3. Implemente um programa que leia três variáveis do teclado, uma de cada tipo: char, int e float (o programa deve ler
nesta ordem, ou seja, primeiro variável tipo char, depois int e depois float, conforme exemplo mostrado abaixo e que
deverá ser completado para as devidas leituras e impressões). Lembre-se de que uma variável tipo char armazena um
único caractere (letra, símbolo ou dígito), então ao fornecer o seu valor via teclado evite uma sequência de caracteres
(forneça apenas um caractere). Ao final, imprima o conteúdo de cada variável. Lembre-se de usar nomes significativos
e de imprimir mensagens adequadas!
1 # include < stdio .h >
2 int main ()
3 {
4 int i;
5 float f;
6 char c;
7
8 printf (" Digite um caractere : ");
9 scanf () ;// complete o comando para ler a variável c
10 printf (" Digite um valor inteiro : ") ;
11 scanf () ; // complete o comando para ler a variável i
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
    printf(" Digite um caractere : ");
    scanf("%c", &c); // complete o comando para ler a variável c
    printf(" Digite um valor inteiro : ");
    scanf("%i", &i); // complete o comando para ler a variável i
    printf(" Entre com um numero de ponto flutuante ( valor nao inteiro ): ");
    scanf("%f", &f);  // complete o comando para ler a variável f
    printf("Inteiro: %i\nFloat: %f\nCaracter: %c\n", i, f, c); // imprimeir as variável

    return 0;
}