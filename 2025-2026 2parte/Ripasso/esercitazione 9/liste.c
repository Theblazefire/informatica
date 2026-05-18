/*
Realizzare un'applicazione per gestire una lista di persone.

• Definire delle strutture per rappresentare un elemento della lista, una persona ed una data. In
particolare, l’applicazione deve gestire ciascuna persona come una struttura con tre campi. I
primi due campi sono array di 20 caratteri che rappresentano il nome ed il cognome della
persona. Il terzo campo è la data di nascita della persona. La data di nascita deve essere
gestita come una struttura con tre campi, che rappresentano giorno, mese ed anno.
• L’applicazione contiene una funzione visualizzaLista per visualizzare la lista.
• L’applicazione contiene una funzione inserisciCoda per inserire una persona in coda alla lista.
In particolare, il nome ed il cognome della persona inserita devono essere letti utilizzando la
funzione fgets.
• L’applicazione contiene una funzione eliminaGiovanni per eliminare dalla lista ogni persona il
cui nome è Giovanni.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct data{
	int giorno;
	int mese;
	int anno;
}DATA;
typedef struct persona{
	char nome[20];
	char cognome[20];
	DATA data;
}PERSONA;
typedef struct nodo{
	struct nodo* next;
	PERSONA info;
}NODO;

NODO* creaNodo(PERSONA p){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("il nodo non e' stato potuto allocare per spazio non disponibile\n");
	}else{
		nuovoNodo->info=p;
		nuovoNodo->next=NULL;
		return	nuovoNodo;
	}
}

PERSONA dammiPers(){
	PERSONA	p;
	printf("inserisci nome\n");
	fgets(p.nome,20,stdin);
	p.nome[strlen(p.nome)-1]='\0';
	printf("inserisci cognome\n");
	fgets(p.cognome,20,stdin);
	p.cognome[strlen(p.cognome)-1]='\0';
	printf("inserisci data di nascita\n");
	printf("giorno:");
	scanf_s("%d%*c",&p.data.giorno);
	printf("\n");
	printf("mese:");
	scanf_s("%d",&p.data.mese);
	printf("\n");
	printf("anno:");
	scanf_s("%d%*c",&p.data.anno);
	printf("\n");
	return	p;
}
NODO* inserCoda(NODO* head,PERSONA x){
	NODO* nuovoNodo= creaNodo(x);
	if (head==NULL)
	{
		return nuovoNodo;
	}else{
		NODO* curr=head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=nuovoNodo;
		return	head;
	}

}
void visualizzaLista(NODO* head){
	if (head==NULL)
	{
		printf("lista vuota\n");
		return;
	}else{
		while(head!=NULL){
			printf("[[ [%s,%s],[%d,%d,%d] ]|*]->",head->info.nome,head->info.cognome,head->info.data.giorno,head->info.data.mese,head->info.data.anno);
			head=head->next;
		}
	}
}
NODO* cancValore(NODO*head){
	if (head==NULL){
		printf("lista vuota\n");
	}else{
		if (strcmp(head->info.nome,"Giovanni")==0)
		{
			NODO* curr=head;
			head=head->next;
			free(curr);
		}else{
			NODO* curr=head;
			while(curr->next!=NULL){
				if (strcmp(curr->next->info.nome,"Giovanni")==0){
					NODO* temp=curr->next;
					curr->next=curr->next->next;
					free(temp);
				}else{
					curr=curr->next;
				}
			}
		}
	}

	return	head;

}	
int main(){
	PERSONA p;
	NODO* head=NULL;
	int scelta=-1;
	while(scelta!=0){
		printf("MENU\n");
		printf("1) inserisci in Coda\n");
		printf("2) vedi lista\n");
		printf("3) cancella Giovanni\n");
		printf("0) esci\n");
		scanf_s("%d%*c",&scelta);
		if (scelta==1){
			p=dammiPers();
			head=inserCoda(head,p);
			}else{
				if (scelta==2){
					visualizzaLista(head);
					printf("NULL\n");
				}else{
					if (scelta==3)
					{
						head=cancValore(head);
					}
				}
			}
	
	}

	

}
