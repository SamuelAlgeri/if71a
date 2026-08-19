#include <stdio.h>

int main (){
    printf("Deposito: R$ %.2f\n", 500.00);
    printf("Rendimento: R$ %.2f\n", 500.00 * 1.00/100.0);
    printf("Final do mês: R$ %.2f\n", 500.00 * 0.01 + 500.00);
    printf("\n\n\n");
    
    return 0;
}