# Vantagens e Desvantagens

---

## Pilha — Aplicação: Desfazer ações (Ctrl+Z)

A pilha segue a lógica LIFO: o último que entra é o primeiro que sai.
Isso funciona perfeitamente para desfazer ações, porque a última ação feita deve ser a primeira a ser desfeita.

**Vantagens:**
- Empilhar e desempilhar são operações rápidas (O(1))
- Código simples de implementar e entender
- Tamanho cresce conforme necessário (sem limite fixo)
- A lógica LIFO combina perfeitamente com o comportamento de desfazer

**Desvantagens:**
- Só dá pra acessar o topo. Para chegar em um elemento no meio, precisa desempilhar tudo acima
- Não tem acesso direto por posição (sem índice como em um array)
- Cada nó usa um ponteiro extra, o que consome um pouco mais de memória

---

## Fila — Aplicação: Fila de atendimento

A fila segue a lógica FIFO: o primeiro que entra é o primeiro que sai.
Isso é justo para sistemas de atendimento, porque quem chegou antes deve ser atendido antes.

**Vantagens:**
- Enfileirar e desenfileirar são operações rápidas (O(1))
- Garante ordem justa de atendimento
- Tamanho dinâmico, cresce conforme chegam clientes
- Fácil de visualizar e entender

**Desvantagens:**
- Só dá pra acessar a frente e o fim. Ver um elemento no meio exige percorrer toda a fila
- Não tem como reordenar os elementos sem refazer a fila
- Precisamos de dois ponteiros (frente e fim), o que deixa o código um pouco mais trabalhoso que a pilha
