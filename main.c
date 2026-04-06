#include <stdio.h>
#include <string.h>
#include "lista.h"

int main() {
    TipoLista lista;
    FLVazia(&lista);

    char cmd[10];
    while (scanf("%s", cmd) == 1) {
        if (strcmp(cmd, "i") == 0) {
            TipoItem item;
            scanf("%d", &item.Chave);
            Insere(item, &lista);

        } else if (strcmp(cmd, "ii") == 0) {
            TipoItem item;
            scanf("%d", &item.Chave);
            InsereInicio(item, &lista);

        } else if (strcmp(cmd, "ru") == 0) {
            TipoItem item;
            RetiraUltimo(&lista, &item);
            printf("retirado: %d\n", item.Chave);

        } else if (strcmp(cmd, "inv") == 0) {
            Inverte(&lista);

        } else if (strcmp(cmd, "tam") == 0) {
            printf("tamanho: %d\n", Tamanho(&lista));

        } else if (strcmp(cmd, "imp") == 0) {
            Imprime(lista);
        }
    }

    return 0;
}
