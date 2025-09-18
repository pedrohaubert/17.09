/******************************************************************************

Exercício 1: Crie um procedimento que recebe um inteiro e imprime na 
tela os valores bit a bit desse inteiro. Use as operações de <<, & e um loop 
para isolar cada bit dele e saber em quais está com 1 ou 0. (Lembrando um 
inteiro tem um tamanho de 16 bits)


*******************************************************************************/

#include <stdio.h>


void PrintaBits(int valor) {
    for (int i = 31; i >= 0; i--) {
        int mask = 1 << i;
        int result = (valor & mask);
        
        if(result == 0){
        printf("0");
        }else{
        printf("1");
        }
    }
}

int main() {
    int valor;

    printf("Digite um valor inteiro para printar bit a bit: ");
    scanf("%d", &valor);

    PrintaBits(valor);

    return 0;
}
