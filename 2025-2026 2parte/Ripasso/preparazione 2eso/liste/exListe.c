#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int info;
    struct Nodo *next;
} NODO;
NODO* creaNodo(int x){
    NODO* nuovoNodo=malloc(sizeof(NODO));
    nuovoNodo->info=x;
    nuovoNodo->next=NULL;
    return nuovoNodo;
}
// qui scrivi le funzioni una alla volta
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
void printLista(NODO* head){
    NODO* curr=head;
    while(curr!=NULL){
        printf("[%d|*] ->",curr->info );
        curr=curr->next;
    }
    printf("NULL\n");
}

NODO* cancellaPerValore(NODO* head,int x){
    
}
int main() {
    NODO* head=NULL;
    head=inserimentoInCoda(head,1);
    head=inserimentoInCoda(head,10);
    head=inserimentoInCoda(head,54);
    printLista(head);
    return 0;
}