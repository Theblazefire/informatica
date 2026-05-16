#include <stdio.h>
#include <stdlib.h>
typedef struct nodo{
	int info;
	struct nodo* prev;
	struct nodo* next;
}NODO;

NODO* inserTail(NODO* head,int x){
	NODO* new = (NODO*)malloc(sizeof(NODO));
	//crea lista circolare  
	head->prev->next= new;//la testa va all'ultimo e aggiunge il nuovo nodo
	head->prev=new;//dietro la testa c'è il nuovo nodo
	//collegamenti del nodo
	new->next=head//il nodo si collega alla testa per mantenere il 
	//              collegamento e mantenere il collegamento
	new->info=x;
	return head;
}

NODO* creaTesta(int x){
	NODO* head = (NODO*)malloc(sizeof(NODO));
	head->next = head;
	head->prev = head;
	head->info=x;
}

int main(){
	//lista con un nodo
	int x=12;
	NODO* head = creaTesta(x);
	head= inserTail(head,22);

}