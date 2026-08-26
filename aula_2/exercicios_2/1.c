/*
1. OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão
tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo,
contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número de alunos
e o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos os alunos e
monitores em apenas uma viagem
*/

#include <stdio.h>

#define maxCapacidade 50

int alunos_qtd, monitores_qtd, qtd_total;

int main(){

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos_qtd);
    printf("Digite a quantidade de monitores: ");
    scanf("%d", &monitores_qtd);

    qtd_total = alunos_qtd + monitores_qtd;

    if(qtd_total > maxCapacidade){
        printf("Nao eh possivel levar todos os alunos");
    }else{
        printf("Eh possivel levar todos os alunos\n");
    }
    
    return 0;
}