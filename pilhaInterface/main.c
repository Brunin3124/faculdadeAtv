#include <stdio.h>
#include "interface/pilha.h"
#include "interface/fila.h"

int main(){

    Pilha* pilha = criar_pilha();
    push(pilha,5);
    push(pilha,8);

    int retorno;
    retorno = pop(pilha);
    printf("%d\n", retorno);
    retorno = pop(pilha);
    printf("%d\n", retorno);

    Fila* fila = criar_fila();
    inserir(fila,9);
    
    retorno = retirar(fila);
    printf("%d\n", retorno);

    return 0;
}
