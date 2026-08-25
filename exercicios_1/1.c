/* 1. O programa abaixo ilustra a movimentação em uma conta poupança que foi aberta com um depósito (D), com rendimentos de R% de juros ao mês, ambos definidos como macro via comando #define. O programa imprime o valor do
depósito, o valor do rendimento e o valor ao final do mês.
1 # include < stdio .h >
2
3 # define D 500.0
4 # define R 1.0
5 int main ( )
6 {
7 printf (" Deposito : R$ %f \n", D);
8 printf (" Rendimento : R$%f \n", R /100* D );
9 printf (" Final do mes : R$%f \n", D + R /100* D );
10 printf ("\n") ;
11 return 0;
12 }
Modifique o programa acima de forma que os valores do depósito (dep) e rendimento (rend) sejam variáveis cujos
valores são lidos pelo programa (ou seja, fornecidos pelo usuário) via teclado e para que a impressão dos valores ocorra
com 2 casas decimais. Compare as duas implementações e inclua como comentários no código as
vantagens/desvantagens de se usar variáveis e não macros na solução do problema.
*/

#include <stdio.h>

/* #define D 500.0
#define R 1.0

int main(){

    printf(" Deposito : R$ %f \n", D);
    printf(" Rendimento : R$%f \n", R / 100 * D);
    printf(" Final do mes : R$%f \n", D + R / 100 * D);
    printf("\n\n\n");
}*/

float dep;
float rend;
float rendimento;
float resultado;

int main (){
    printf("Digite o valor do deposito: ");
    scanf("%f", &dep);
    printf("Digite o percentual do rendimento: ");
    scanf("%f", &rend);
// Essa opção tem como vatangens nos casos em que quero montar um tipo de calculadora pois os valores não serão fixos e posso testar vários tipos de inputs 
// Já as desvantagens é que é utilizado um código maior e ocupa mais memória pois são necessárias 4 variáveis e não apenas 2 valores definidos
    rendimento = dep * rend/100;
    resultado = dep + rendimento;
    printf("Deposito: R$ %.2f\n", dep);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Final do mes: R$ %.2f\n", resultado); 
    printf("\n\n\n");

    return 0;
}