 Abaixo está a representação visual da lista de adjacência implementada no código, gerada dinamicamente utilizando **Mermaid**:

```mermaid
graph TD
    %% Definição das arestas baseadas na lista de adjacência
    0 --> 2
    0 --> 1
    1 --> 4
    1 --> 3
    2 --> 6
    2 --> 5
    3 --> 7
    4 --> 8
    5 --> 9
    
    %% Estilização opcional para destacar os nós
    classDef default fill:#2b3137,stroke:#58a6ff,stroke-width:2px,color:#c9d1d9;
```

A estrutura acima corresponde à seguinte lista de adjacência:
* **Vértice 0:** aponta para 2 e 1
* **Vértice 1:** aponta para 4 e 3
* **Vértice 2:** aponta para 6 e 5
* **Vértice 3:** aponta para 7
* **Vértice 4:** aponta para 8
* **Vértice 5:** aponta para 9
* **Vértices 6, 7, 8, 9:** não possuem arestas de saída (nós folha)
