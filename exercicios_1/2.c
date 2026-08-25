#include <stdio.h>
/* 2. Modifique o programa anterior para calcular e imprimir o valor no final do mês, considerando que há uma retirada
(ret) cujo valor também deve ser lido pelo programa via teclado. */
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
float ret;

int main (){
    printf("Digite o valor do deposito: R$ ");
    scanf("%f", &dep);
    printf("Digite o percentual do rendimento: ");
    scanf("%f", &rend);
    rendimento = dep * rend/100;
    resultado = dep + rendimento;
    printf("Deposito: R$ %.2f\n", dep);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Digite o valor da retirada: R$ ");
    scanf("%f", &ret);
    resultado = resultado - ret;
    printf("Final do mes: R$ %.2f\n", resultado); 
    printf("\n\n\n");

    return 0;
}