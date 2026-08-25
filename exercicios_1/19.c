/* 19. Faça um programa que leia 3 valores que correspondem às três notas de um aluno. A seguir, calcule a média do aluno,
sabendo que a primeira nota tem peso 2, a segunda nota tem peso 3 e a terceira nota tem peso 5. Considere que cada
nota pode ir de 0 até 10.0. Imprima a média com 1 dígito após o ponto decimal.
*/
#include <stdio.h>

# define nota1_peso 2
# define nota2_peso 3
# define nota3_peso 5
float nota1, nota2, nota3, media_final;

int main(){
    printf(" Digite a nota 1: ");
    scanf(" %f", &nota1);
    printf(" Digite a nota 2: ");
    scanf(" %f", &nota2);
    printf(" Digite a nota 3: ");
    scanf(" %f", &nota3);
    
    media_final = ((nota1 * nota1_peso) + (nota2 * nota2_peso) + (nota3 * nota3_peso)) / (nota1_peso + nota2_peso + nota3_peso);
    
    printf(" a nota final eh %.1f", media_final);

    return 0;
}