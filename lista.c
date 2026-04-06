#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void FLVazia(TipoLista *Lista) {
    Lista->Primeiro = (TipoApontador) malloc(sizeof(TipoCelula));
    Lista->Ultimo   = Lista->Primeiro;
    Lista->Primeiro->Prox = NULL;
}

int Vazia(TipoLista Lista) {
    return (Lista.Primeiro == Lista.Ultimo);
}

void Insere(TipoItem x, TipoLista *Lista) {
    Lista->Ultimo->Prox = (TipoApontador) malloc(sizeof(TipoCelula));
    Lista->Ultimo       = Lista->Ultimo->Prox;
    Lista->Ultimo->Item = x;
    Lista->Ultimo->Prox = NULL;
}

void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item) {
    TipoApontador q;
    if (Vazia(*Lista) || p == NULL || p->Prox == NULL) {
        printf("Erro: lista vazia ou posicao invalida\n");
        return;
    }
    q        = p->Prox;
    *Item    = q->Item;
    p->Prox  = q->Prox;
    if (p->Prox == NULL) Lista->Ultimo = p;
    free(q);
}

void Imprime(TipoLista Lista) {
    TipoApontador Aux = Lista.Primeiro->Prox;
    while (Aux != NULL) {
        printf("%d\n", Aux->Item.Chave);
        Aux = Aux->Prox;
    }
}

void RetiraUltimo(TipoLista *Lista, TipoItem *Item) {
    /* IMPLEMENTAR */
}

void InsereInicio(TipoItem x, TipoLista *Lista) {
    /* IMPLEMENTAR */
}

void Inverte(TipoLista *Lista) {
    /* IMPLEMENTAR */
}

int Tamanho(TipoLista *Lista) {
    /* IMPLEMENTAR */
    return 0;
}
