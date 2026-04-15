/*
Realizzare un’applicazione per gestire una lista di dischi, ordinati per ordine lessicografico del titolo. 
L’applicazione deve gestire ciascun disco come una struttura con tre campi, che rappresentano il 
titolo del disco, il nome dell’autore e l’anno di pubblicazione. 
• (1pt) Definire delle strutture per rappresentare un disco ed un nodo della lista. Definire inoltre 
una funzione main che crea la lista e gestisce l’interazione con l’utente. La funzione main è già 
parzialmente implementata in un file b2.c che può essere scaricato da Moodle. 
• (1,5pt) Definire una funzione che visualizza una lista di dischi, stampando per ciascun disco le 
informazioni ad esso associate.  
• (5,5pt) Definire una funzione che inserisce un nuovo disco nella lista, mantenendo 
l’ordinamento lessicografico dei dischi per titolo. 
• (4pt) Definire una funzione che cancella l’ultimo disco della lista.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Disco{
	char titolo[50];
	char autore[50];
	int anno;
}DISCO;

typedef struct L{
	DISCO d;
	struct L* next;
}NODO;
void stampa(NODO* nodo){
	while(nodo->next!=NULL){
		printf("Titolo: %s\n",nodo->d.titolo);
		printf("Autore: %s\n",nodo->d.autore);
		printf("Anno: %d\n",nodo->d.anno );
		nodo=nodo->next;
	}
}
NODO inserimento_ordinato(NODO* head){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	
	printf("inserisci titolo (max 49 caratteri)\n");
	fgets(nuovoNodo->d.titolo,50,stdin);
	nuovoNodo->d.titolo[strcspn(nuovoNodo->d.titolo,"\n")]='\0';//<-chiedere
	printf("inserisci autore (max 49 caratteri)\n");
	fgets(nuovoNodo->d.autore,50,stdin);
	nuovoNodo->d.autore[strcspn(nuovoNodo->d.autore,"\n")]='\0';//<-chiedere
	printf("inserisci anno di pubblicazione\n");
	scanf_s("%d",&(nuovoNodo->d.anno));
	// Pulisce il buffer della tastiera dopo lo scanf
	//while(getchar() != '\n');
	
	//scambio testa?
	//[x][][]
	if (head==NULL||strcmp(nuovoNodo->d.titolo, head->d.titolo )<0 )
	{
		nuovoNodo->next= head;
		head=nuovoNodo;
	}else{
		NODO* savePrec=NULL;
		NODO* curr = *head; 
		while(curr!=NULL && strcmp(nuovoNodo->d.titolo,curr->d.titolo)>0){
			savePrec=curr;
			curr=curr->next;
		}
		savePrec->next=nuovoNodo;
		nuovoNodo->next=curr;
	}
	return head;
}

NODO canc(NODO* head){
	if (head==NULL)//lista vuota
	{
		printf("error vedo NULL\n");
	}else{
		if (head->next==NULL)//un elemento
		{
			free(head);
			head=NULL;
		}else{
			NODO* curr= *head;
			while(*curr->next->next!=NULL){
				curr=curr->next;
			}
			//arrivato all'ultimo
			free(curr->next);
			curr->next=NULL;//cancello			
		}
	}

}


int main(){
	//inizializazione
	NODO* head=NULL;
	int scelta=-1;
	printf("Menu Gestione dischi\n");
	printf("\n--- MENU GESTIONE DISCHI ---\n");
    printf("1. Inserisci nuovo disco\n");
    printf("2. Visualizza tutti i dischi\n");
    printf("3. Cancella l'ultimo disco\n");
    printf("0. Esci\n");
    printf("----------------------------\n");
    printf("Seleziona un'opzione: ");
        scanf_s("%d",&scelta);
        while(scelta!=0){
        	if (scelta==1)
        	{
        		head=inserimento_ordinato(head);
        	}else{
        		if (scelta==2)
        		{
       		 		stampa(head);
        		}else{
       		 		if (scelta==3)
        			{
        				head=canc(head);
       		 		}
        		}
       		}
       	}
	return 0;
}