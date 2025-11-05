#include <stdio.h>
#include <stdlib.h>
#include "../interface/fila.h"


struct lista{
    int valor;
    struct lista* prox;
};
typedef struct lista Lista;

struct fila{
    Lista* primeiro;
    Lista* fim;
};


//funcoes
Fila* criar_fila(){
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->primeiro = NULL;
    fila->fim = NULL;
    return fila;
}

int verifia_vazio(Fila* fila){
    if(fila->primeiro == NULL && fila->fim == NULL) return 1;
    return 0;
}

void inserir(Fila* fila, int valor){

    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = valor;
    novo->prox = NULL;
    if(verifia_vazio(fila)){
        fila->primeiro = novo;
        fila->fim = novo;
    }
    fila->fim->prox = novo;
    fila->fim = novo;
}