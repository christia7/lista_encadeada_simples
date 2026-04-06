## Enunciado

O repositório contém uma implementação de lista encadeada com célula cabeça em C, do livro Projeto de Algoritmos 3 edição, organizada em três arquivos:

- `lista.h` — declaração dos tipos e assinaturas de todas as funções
- `lista.c` — implementação das funções (fornecidas e a implementar)
- `main.c` — programa principal que lê comandos e testa a lista

As seguintes funções já estão implementadas em `lista.c`:

- `FLVazia` — inicializa a lista vazia
- `Vazia` — verifica se a lista está vazia
- `Insere` — insere um elemento no final
- `Retira` — retira o elemento seguinte ao apontado por `p`
- `Imprime` — percorre e imprime todos os elementos

Sua tarefa é implementar as seguintes funções em `lista.c` que não tem no livro:

```c
void RetiraUltimo(TipoLista *Lista, TipoItem *Item);
void InsereInicio(TipoItem x, TipoLista *Lista);
void Inverte(TipoLista *Lista);
int  Tamanho(TipoLista *Lista);
```

### Descrição das funções

**`RetiraUltimo`** — Remove o último elemento da lista e devolve seu valor em `*Item`. Percorra a lista até encontrar o penúltimo nó e atualize o ponteiro `Ultimo`.

**`InsereInicio`** — Insere o item `x` logo após a célula cabeça, tornando-o o novo primeiro elemento. Atualize `Ultimo` caso a lista estivesse vazia.

**`Inverte`** — Inverte a ordem dos elementos no próprio encadeamento, sem criar uma nova lista e sem usar vetor auxiliar. Atualize os ponteiros `Primeiro` e `Ultimo` da estrutura.

**`Tamanho`** — Percorre a lista a partir do primeiro nó real (após a cabeça) e retorna o número de elementos.

### Entrada

A entrada é uma sequência de comandos, um por linha, lidos até o fim do arquivo. Cada comando pode ser:

| Comando | Argumento | Ação |
| :------ | :-------- | :--- |
| `i X`   | inteiro X | Insere X no final da lista |
| `ii X`  | inteiro X | Insere X no início da lista |
| `ru`    | —         | Retira o último elemento |
| `inv`   | —         | Inverte a lista |
| `tam`   | —         | Consulta o tamanho da lista |
| `imp`   | —         | Imprime todos os elementos |

### Saída

Apenas os comandos `ru`, `tam` e `imp` produzem saída:

- `ru` imprime `retirado: X\n`, onde X é o valor removido.
- `tam` imprime `tamanho: N\n`, onde N é o número de elementos.
- `imp` imprime cada elemento em uma linha separada, na ordem em que estão na lista.

### Exemplos de entrada e saída

| Entrada | Saída |
| :--- | :--- |
| `i 10`<br>`i 20`<br>`i 30`<br>`imp` | `10`<br>`20`<br>`30` |
| `i 10`<br>`i 20`<br>`ii 5`<br>`ii 1`<br>`imp` | `1`<br>`5`<br>`10`<br>`20` |
| `i 10`<br>`i 20`<br>`ii 5`<br>`ii 1`<br>`tam`<br>`inv`<br>`imp`<br>`ru`<br>`imp`<br>`tam` | `tamanho: 4`<br>`20`<br>`10`<br>`5`<br>`1`<br>`retirado: 1`<br>`20`<br>`10`<br>`5`<br>`tamanho: 3` |
---

### Questões de análise

Considere `n` o número de elementos na lista.

1. Qual a complexidade de `InsereInicio`? Justifique.
2. Qual a complexidade de `RetiraUltimo`? Por que ela é diferente de `Retira`, que opera em O(1)?
3. Qual a complexidade de `Inverte`? Justifique.
4. Seria possível implementar `RetiraUltimo` em O(1) com a estrutura atual? O que precisaria mudar na definição de `TipoLista` para isso ser possível?

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- `lista.c`

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e teste com `make test`
