
struct Pilha{
	char metodo;
	struct Pilha* prox;
};

typedef struct Pilha pilha;
typedef pilha* pilhaPtr;

void push(pilhaPtr*,char);
char pop(pilhaPtr* topo);
