#include <stdio.h>
#define valor 500.00
#define juros 1.00/100.00;

// float valor = 500.00;
// float juros = 1.00/100.00;
float rendimento;
float resultado;

int main (){
    rendimento = valor * juros;
    resultado = valor + rendimento;
    printf("Deposito: R$ %.2f\n", valor);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Final do mes: R$ %.2f\n", resultado); 
    printf("\n\n\n");

    return 0;
}