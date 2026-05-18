/*
Esercizio Liste 
Realizzare un'applicazione Fritti per gestire il menù di una pizzeria.

Definire due strutture, una per rappresentare un elemento della lista 
ed una per rappresentare un fritto 
che fa parte del menù. 
In particolare, l’applicazione deve gestire ciascun fritto come una struttura 
con tre campi. 

-Il primo campo è una stringa che indica il nome del fritto (ad esempio “fiori di zucca”), 
-il secondo campo è un valore reale che indica il prezzo del fritto, 
-il terzo campo è un carattere ‘s’ o ‘f’ che indica se il fritto è surgelato o fresco.

Definire una funzione che visualizza il menù, stampando per ciascuna fritto il nome, il prezzo e se il fritto 
è surgelato oppure no. 

Definire una funzione che inserisce un fritto in coda al menù. 

Definire una funzione che ordina la lista così che i fritti freschi compaiano prima 
di quelli surgelati e così 
che i fritti freschi (e quelli surgelati) siano fra loro ordinati per prezzo.

Definire una funzione main che crea la lista e gestisce l’interazione con l’utente. 
La funzione main è 
già parzialmente implementata in un file Liste.c.  
*/

#include <stdio.h>
#include <stdlib.h>

/*****************************/
/********* STRUTTURE *********/
/*****************************/
typedef	struct fritto{
	char nome[50];
	float prezzo;
	char tipo;
}FRITTO;
typedef	struct nodo{
	struct nodo* next;
	FRITTO info;
}NODO;

/**************************************/
/*********** VISUALIZZAZIONE **********/
/**************************************/
void stampafritta(FRITTO f){
	printf("%s_______prezzo:_%d__tipo__%c\n", f.nome,f.prezzo, f.tipo );
}
void printList(NODO* head){
	while(head!=NULL){
		stampafritta(head->info);
		head=head->next;
	}
}
/**********************************************
 **************** INSERIMENTO *****************
 **********************************************/
NODO* creaNodo(FRITTO x){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("error allocazione\n");
		return	NULL;
	}else{
		nuovoNodo->info=x;
		nuovoNodo->next=NULL;
		return	nuovoNodo;
	}
}
NODO* inserTail(NODO* head,FRITTO f){
	NODO* nuovoNodo	= creaNodo(f);
	if (nuovoNodo==NULL) return	head;

	if (head==NULL)
	{
		return	nuovoNodo;
	}else{
		NODO* curr=head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=nuovoNodo;
		return	head;	
	}
}

/**********************************************
 ******* ORDINAMENTO ************************
 **********************************************/
/* capire e rifare
int precede(FRITTO* f1, FRITTO* f2) {
    return ((f1->stato == 'f' && f2->stato == 's') ||
            ((f1->stato == f2->stato) && (f1->prezzo < f2->prezzo)));
}

void scambia(FRITTO* f1, FRITTO* f2) {
    FRITTO temp;
    temp = *f1;
    *f1  = *f2;
    *f2  = temp;
}
void ordinaLista(NODO* puntaHead) {
    // ❌ NON fare puntaHead = puntaHead->next  (non c'è sentinella!)

    // lista vuota o con un solo nodo: già ordinata
    if (puntaHead == NULL || puntaHead->next == NULL) {
        printf("Lista piccola!\n\n");
        return;
    }

    int cambiato = 1;

    while (cambiato != 0) {
        cambiato = 0;

        // scorre da head (che è già il primo nodo reale)
        for (NODO* nodo = puntaHead; nodo->next != NULL; nodo = nodo->next) {
            if (precede(&(nodo->next->fritto), &(nodo->fritto))) {
                scambia(&(nodo->fritto), &(nodo->next->fritto));
                cambiato = 1;
            }
        }
    }

    printf("Lista ordinata!\n\n");
}
*/

NODO* ordinamento(NODO* head){
		return	head;
}

/**********************************************
 ************ FUNZIONE PRINCIPALE ************
 **********************************************/

int main() {
	/* inizializza la lista */


	int risposta = -1;			// per interazione con utente

	while(risposta != 0) {
		/* richiedi un'operazione all'utente */
		printf("Che operazione vuoi svolgere?\n");
		printf("1 -> Visualizzazione\n");
		printf("2 -> Inserimento\n");
		printf("3 -> Ordinamento\n");
		printf("0 -> Termina il programma\n");
		scanf("%d", &risposta);

		/* gestisci le operazioni dell'utente */
		if(risposta==1)

		else if(risposta==2)

		else if(risposta==3)

		else if(risposta==0)
			printf("Finito!\n\n");
		else printf("Selezione non valida!\n\n");
	}
}