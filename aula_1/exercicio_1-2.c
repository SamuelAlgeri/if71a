#include <stdio.h>

int main (){

    printf("Deposito: R$ %.2f\nFinal do mês: R$ %.2f\nRendimento: R$ %.2f\n",500.00, 500.00 * 1.00/100.0, 500.00 * 0.01 + 500.00);

    printf("\n\n\n");
    
    return 0;
}