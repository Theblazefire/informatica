#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int info;
	struct Nodo* next;
}NODO;
NODO* creaNodo(int info){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	nuovoNodo->info=info;
	nuovoNodo->next=NULL;
	return nuovoNodo;
}