#ifndef FILA_H 
#define FILA_H


typedef struct fila Fila;

//funcoes
Fila* criar_fila();
int verifica_vazio();
void inserir(Fila* fila, int valor);
int retirar(Fila* fila);
void liberar(Fila* fila);



#endif