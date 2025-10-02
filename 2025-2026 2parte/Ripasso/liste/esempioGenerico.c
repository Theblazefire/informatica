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
    //nuovo blocco d-o-o-e
    struct nodo *Pcoda=malloc(sizeof(struct nodo));
    printf("iniserisci elemento intero\n");
    scanf("%d",&(Pcoda->n));
    //il blocco diventa coda
    Pcoda->next=NULL;

    /*controlla lista*/
    if (head==NULL)
    {
        head=Pcoda;
    }
    else
    {
        struct nodo *corrente=head;

        while(corrente->next!=NULL)
        {
            corrente=corrente->next;
        }
        corrente->next=Pcoda;
    }
    return head;
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
struct nodo *cancellaTesta(struct nodo* head)
{
    struct nodo *Successivo;
    if (head==NULL)
    {
        printf("lista vuota non posso cancellare\n");
        Successivo=NULL;
    }
    else
    {
        /*salva indirizzo del successivo*/
        Successivo=head->next;
        free(head);
    }
    return Successivo;
    
}
int main()
{
    
    int n;
    printf("creazione testa vuota lista\n");
    struct nodo *head=NULL;
    printf("creazione completata\n");
    /*menu funzioni*/
    while(n!=0){
    printf("inserisci 1 per leggere la lista\n");
    printf("inserisci 2 elemento in testa alla lista\n");
    printf("inserisci 3 canccela elemento in testa alla lista\n");
    printf("inserisci 4 inserisci coda alla lista\n");
    printf("inserisci 0 per finire\n");
    scanf("%d",&n);
        if (n==1)
        {
            stampalista(head);
        }
    
        if (n==2)
        {
            head= diventoTesta(head);
        }

        if (n==3)
        {
            head= cancellaTesta(head);
        }

        if (n==4)
        {
            head= diventaCoda(head);
        }
    }
    
    return 0;
}