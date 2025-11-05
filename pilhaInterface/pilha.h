#ifndef PILHA_H
#define PILHA_H


typedef struct pilha Pilha;

Pilha* criar_pilha();
int pop(Pilha* pilha);
void push(Pilha* pilha, int valor);
int verifica_vazio(Pilha* pilha);
void liberar_pilha(Pilha* pilha);


#endif