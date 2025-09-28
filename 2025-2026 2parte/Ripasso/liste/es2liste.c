#include<stdio.h>
#include<stdlib.h>
struct nodo{//nodo
    int n;
    struct nodo *next;
};
/*
non si possono avere struct 
con elementi diversi con 
lo stesso nome:

struct nodo{
    char persona[50];
    int eta;
    struct nodo *next;
};
*/
//###########################################################
//funzione di cambio testa
struct nodo* inserisciNodo(struct nodo* head)
{
    //dai memoria al puntatore
    struct nodo *nuovonodo=malloc(sizeof(struct nodo));
    printf("inserisci intero\n");
    scanf("%d",&(nuovonodo->n));//il puntatore punta a n dando il valore alla variabile 
    nuovonodo->next=head;//assegnazione null, quindi è la coda.
    return nuovonodo;
}
//funzione stampaLista
void stampaLista(struct node* head)
{
    /*primo elemento della lista*/
    struct nodo *nodo=head;

    /*lista vuota?*/
    if (nodo==NULL)
    {
        printf("lista vuota\n");
    }
    else
    {
        while(nodo!=NULL)
        {
            printf("%d\n",*nodo);
            nodo=nodo->next;
        }
    }
    
}
//funzione principale
int main()
{
    //testa lista
    struct nodo *head=NULL;
    /*cambio della testa*/
    head=inserisciNodo(head);
    stampaLista(head);
    return 0;
}