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

int isvazio(Fila* fila){
    if(fila->primeiro == NULL && fila->fim == NULL) return 1;
    return 0;
}

void inserir(Fila* fila, int valor){

    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = valor;
    novo->prox = NULL;
    if(isvazio(fila)){
        fila->primeiro = novo;
        fila->fim = novo;
    }
    fila->fim->prox = novo;
    fila->fim = novo;
}

int retirar(Fila* fila){
    Lista* l;
    int retorno;

    if(isvazio(fila)) return 1;
    retorno = fila->primeiro->valor;
    l = fila->primeiro;
    fila->primeiro = fila->primeiro->prox;
    free(l);
    return retorno;

}