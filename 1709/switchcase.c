#include <stdio.h>
#include <math.h>

/* Exercício: Escreva um código usando switch case que recebe um inteiro 
representando um código de erro e imprime na tela o seu significado:
404 → Not found.
403 → Acess Denied.
500 → Internal Server Error.
503 → Service Unavailable.
Caso não saiba o significado do código do erro, imprime “Unknown Error.*/

#include <stdio.h>

int main(){
    int codigo;

    printf("Digite o número correspondente ao código de erro: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 404:
            printf("404 -> Not Found.\n"); 
            break;
            
        case 403:
            printf("403 -> Acess Denied.\n"); 
            break;
            
        case 500:
            printf("500 -> Internal Server Error.\n"); 
            break;
                        
        case 503:
            printf("503 -> Service Unavailable.\n"); 
            break;
            
        default:
            printf("Unknown Error.\n");
    }

    return 0;
}