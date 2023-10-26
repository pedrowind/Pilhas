#include"stdio.h"
#include<stdlib.h>
#include<conio.h>
#include"Prototipos.h"


void push(pilhaPtr* topo, char elemento){
	pilhaPtr novo= (pilhaPtr) malloc(sizeof(pilha));

	if(novo != NULL){
		novo->metodo = elemento;
		novo->prox = *topo;
		*topo = novo;
	}
	else {
		printf("%c Não Inserido. Sem memória disponível.\n", elemento);
	}
}

char pop(pilhaPtr* topo){
	pilhaPtr aux = *topo;
	char elemento = (*topo)->metodo;
	*topo = (*topo)->prox;
	free(aux);
	return elemento;
}


void imprimePilha(pilhaPtr auxiliar){
	printf("\n");
	if (auxiliar== NULL){
		printf("\nA pilha esta vazia.\n\n");

	}else{
		puts("\nPilha:");

		while(auxiliar!= NULL){
			printf("%c--> ",auxiliar->metodo);
			auxiliar = auxiliar->prox;
		}
		printf("Vazio\n\n");
	}
}

