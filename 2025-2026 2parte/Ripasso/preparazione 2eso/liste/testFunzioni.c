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
void printLista(NODO* head){
	NODO* curr=head;
	while(curr!=NULL){
		printf("[%d|*] ->",curr->info );
		curr=curr->next;
	}
	printf("NULL\n");
}

NODO* inserimentoInCoda(NODO* head,int x){
	NODO* nuovoNodo=creaNodo(x);
	//lista vuota
	if (head==NULL)
	{
		return nuovoNodo;
	}

	NODO* curr=head;
	while(curr->next!=NULL){//scorri fino all'ultimo
		curr=curr->next;
	}
	curr->next=nuovoNodo;
	return head;
}

NODO* inserimentoInTesta(NODO* head, int x){
	NODO* nuovaTesta= creaNodo(x);
	nuovaTesta->next=head;
	return nuovaTesta;
}
/*
NODO* cancTesta(NODO* head){
	if (head==NULL)
	{
		return NULL;
	}
	NODO* oldTesta=head;
	head=head->next;
	free(oldTesta);
	return head;
}
NODO* cancCoda(NODO* head){
	//LIsta vuota
	if (head==NULL)
	{
		return NULL;
	}
//lista con un elemento
	if (head->next!=NULL)
	{
		free(head);
		return NULL;
	}

	NODO* curr=head;
	while(curr->next->next!=NULL){//trova il penultimo
		curr=curr->next;
	}
	
	free(curr->next);
	curr->next=NULL;
	return head;
}*/

//ripasso
NODO* cancTesta(NODO* head){
	if (head==NULL)
	{
		return NULL;
	}
	NODO* oldTesta=head;
	head=head->next;//[ [n|*] ]->[n|*]->NULL
	free(oldTesta);
	return head;
}
NODO* cancCoda(NODO* head){
	if (head==NULL)
	{
		return NULL;
	}

	if(head->next==NULL){
		free(head);
		return NULL;
	}
	NODO* curr=head;
	while(curr->next->next!=NULL){
		curr=curr->next;
	}
	free(curr->next);
	curr->next=NULL;
	return head;
}
int main(){
	NODO* n= creaNodo(10);
	printf("Test 1)\n Elemento del nuovoNodo: %d\n\n",n->info );
//---------------------------------------------------------------
	NODO* head=NULL;
	head= inserimentoInCoda(head,56);
	head= inserimentoInCoda(head,242);
	head= inserimentoInCoda(head,1);
	head= inserimentoInCoda(head,120);
	printf("Test 2)\ninserimento in coda e stampa lista\n\n");
	printLista(head);
//-------------------------------------------------------------
	head= inserimentoInTesta(head,101);
	printf("Test 3)\ninserimento in testa e stampa lista\n\n");
	printLista(head);
//-------------------------------------------------------------
	head= cancTesta(head);
	printf("Test 4)\ncancellazzione testa e stampa lista\n\n");
	printLista(head);
//-------------------------------------------------------------
	head= cancCoda(head);
	printf("Test 5)\ncancellazzione coda e stampa lista\n\n");
	printLista(head);
}