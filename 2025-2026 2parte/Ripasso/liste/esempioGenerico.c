#include <stdio.h>
#include <stdlib.h>
struct nodo{
    int n;
    struct nodo *next;
};
struct nodo *diventoTesta(struct nodo *head)
{
    //nuovo blocco
    struct nodo *Pinizio= (struct nodo*)malloc(sizeof(struct nodo));
    printf("inserisci nella lista elementi interi\n");
    scanf("%d",&(Pinizio->n));
    //il blocco diventa testa
    Pinizio->next = head;
    return Pinizio;
}
//inserisci coda
struct nodo *diventaCoda(struct nodo *head)
{
    //nuovo blocco
    struct nodo *PNuovoNodo=malloc(sizeof(struct nodo));
    printf("iniserisci elemento intero\n");
    scanf("%d",&(PNuovoNodo->n));
    //il blocco diventa coda
    PNuovoNodo->next=NULL;
}
void stampalista(struct nodo *head)
{
    struct nodo *Plegge=head;
    
    if (Plegge==NULL)
    {
        printf("lista vuota\n");
    }
    else
    {
            while (Plegge!=NULL)
            {
                printf("%d\n",Plegge->n);
                Plegge=Plegge->next;
            }
    }
    
    
}

int main()
{
    struct nodo *head=NULL;
    stampalista(head);
    head= diventoTesta(head);
    return 0;
}