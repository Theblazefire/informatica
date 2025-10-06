#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int n;
    struct nodo *next;
}NODO;
//##########################################################
 NODO *diventoTesta(NODO *head)
{
    //nuovo blocco
    NODO *Pinizio= malloc(sizeof(struct nodo));
    printf("inserisci nella lista elementi interi\n");
    scanf("%d",&(Pinizio->n));
    //il blocco diventa testa
    Pinizio->next = head;
    return Pinizio;
}

//inserisci coda
NODO *diventaCoda(NODO *head)
{
    //nuovo blocco d-o-o-e
    NODO *Pcoda=malloc(sizeof(struct nodo));
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
        NODO *corrente=head;

        while(corrente->next!=NULL)
        {
            corrente=corrente->next;
        }
        corrente->next=Pcoda;
    }
    return head;
}
void stampalista(NODO *head)
{
    NODO *Plegge=head;
    
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
NODO *cancellaTesta(NODO* head)
{
    NODO *Successivo;
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

void cancellaValore38(NODO  *head,int valore)
{
    NODO    butta;
    int cancellato=0;
    while(head->next!=NULL && !cancellato)
    {/*trova il nodo cercato e collega il precedente con il
        successivo e buttavia il corrente*/
            if(head->next->numero==valore){
                butta= head->next;
                head->next=butta->next
            }else{
                head=head->next;
            }
    }

    if (!cancellato )
    {
        printf("non e' nella lista\n");
    }
}
int main()
{
    
    int n;
    printf("creazione testa vuota lista\n");
    NODO *head=NULL;
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