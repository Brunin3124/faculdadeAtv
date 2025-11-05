#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int valor;
    struct elemento* prox;
};
typedef struct elemento Elemento;

struct pilha{
    Elemento* topo;
};

// funções
Pilha* criar_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int verifica_vazio(Pilha* pilha){
    if(pilha->topo == NULL) return 1;
    return 0;
}

void push(Pilha* pilha, int valor){
    Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
    novo->valor = valor;
    novo->prox = pilha->topo;
    pilha->topo = novo;
}

void liberar_pilha(Pilha* pilha){
    Elemento *t, *q = pilha->topo;
    while(q != NULL){
        t = q->prox;
        free(q);
        q = t;
    }
    
    free(pilha);
}

int pop(Pilha* pilha){

    Elemento* p;

    //vefica se tá vazio
    if(verifica_vazio(pilha)) return 1;

    //var retorno que recebe o valor do elemento a ser removido; p novo topo 
    int retorno = pilha->topo->valor;
    p = pilha->topo->prox;

    free(pilha->topo);
    pilha->topo = p;
    return retorno;

}