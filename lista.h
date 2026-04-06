#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int Chave;
} TipoItem;

typedef struct TipoCelula *TipoApontador;

typedef struct TipoCelula {
    TipoItem     Item;
    TipoApontador Prox;
} TipoCelula;

typedef struct {
    TipoApontador Primeiro, Ultimo;
} TipoLista;

void FLVazia(TipoLista *Lista);
int  Vazia(TipoLista Lista);
void Insere(TipoItem x, TipoLista *Lista);
void Retira(TipoApontador p, TipoLista *Lista, TipoItem *Item);
void Imprime(TipoLista Lista);

void RetiraUltimo(TipoLista *Lista, TipoItem *Item);
void InsereInicio(TipoItem x, TipoLista *Lista);
void Inverte(TipoLista *Lista);
int  Tamanho(TipoLista *Lista);

#endif
