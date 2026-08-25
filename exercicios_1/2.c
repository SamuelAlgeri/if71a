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