#include <stdio.h>

int main(){
    char aux;
    printf(" Digite um caracter : ");
    scanf("%c", &aux);
    printf("%d", aux); // é o numero equivalente à letra que eu digitar
    printf("%c", aux); // colocando o tipo correto ele imprime a letra correta
    return 0;
}