
typedef struct pilha Pilha;

Pilha* create(int n);

int add(Pilha *pi, int e);

int topo(Pilha *pi);

int pop(Pilha *pi);

int size(Pilha *pi);

int bottom(Pilha *pi);

int find(Pilha *pi, int x);

int isFull(Pilha *pi);

int isEmpty(Pilha *pi);

int clear(Pilha *pi);
