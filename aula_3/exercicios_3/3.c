/*
3. Leia 2 valores inteiros x e y (suponha que x > y). A seguir, calcule e mostre
a) quantos números ímpares existem entre eles.
b) quantos ímpares entre eles são divisíveis por pelo menos um deles. 
Lembrando que os números divisíveis por um valor são todos os números naturais 
que ao dividirem tal valor, resultarão em uma divisão exata, isto é, 
com resto igual a zero.
*/

#include <stdio.h>

int x, y, i, impares, divisivel;

int main(){

    printf("Digite um numero para y: ");
    scanf("%d", &y);
    printf("Digite outro numero para x: ");
    scanf("%d", &x);
    
    for(i = y + 1; i < x; i++){
        if(i % 2 != 0){
            impares++;
            if(y % i == 0 || x % i == 0){
                divisivel++;
            }
        }
    }

    printf("Existem %i numeros impares entre %i e %i. \nDesses %i são divisiveis por %i ou %i\n", impares, x, y, divisivel, x, y);
    return 0;
}