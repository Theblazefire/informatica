/*
Esercizio B3 (9 punti): Liste 
Realizzare un'applicazione Pizze per gestire il menù di una pizzeria.  

(1pt) Definire due strutture, una per rappresentare un elemento della lista ed una per rappresentare 
una pizza che fa parte del menù. In particolare, l’applicazione deve gestire ciascuna pizza come una 
struttura con tre campi. 
Il primo campo è una stringa che indica il nome della pizza (ad esempio 
“margherita”), 
il secondo campo è un valore reale che indica il prezzo della pizza, ed 
il terzo campo è un carattere ‘y’ o ‘n’ che indica se la pizza è vegetariana. 

(1.5pt) Definire una funzione che visualizza il menù di pizze, stampando per ciascuna pizza il nome, il 
prezzo e se la pizza è vegetariana oppure no. 

(2pt) Definire una funzione che inserisce una pizza in testa al menù. 

(4.5pt) Definire una funzione che cancella dal menù la prima pizza vegetariana. Se il menù non 
contiene alcuna pizza vegetariana, viene stampato un messaggio che informa l’utente di questo 
fatto. 

Definire una funzione main che crea la lista e gestisce l’interazione con l’utente. La funzione main è 
già parzialmente implementata in un file listeB.c che può essere scaricato da Moodle.  
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pizza{
	char nomePizza[50];
	float prezzo;
	char veg[1];
}PIZZA;

typedef struct Nodo{
	PIZZA info;
	struct Nodo* next;
}NODO;
//##################################################
//[][][][]
void stampaPizza(NODO* head){
	NODO* curr= *head;
	printf("__Menu__\n\n");
	while(curr!=NULL){
		printf("Pizza: %s    %2.f euro vegetariana? %s\n", (*curr)->info.nomePizza,(*curr)->info.prezzo,(*curr)->info.veg);	
		curr=curr->next;
	}
}
NODO* inserimentoTesta(NODO* head){
	NODO nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("nuovoNodo non allocato\n");
	}

	//cambio testa
	if (head==NULL)
	{
		printf("lista vuota\n");
	}else{
		
	}
}
int main(){
	NODO* head=NULL;
	int scelta= -1;
	while(scelta!=0){
		printf("inserisci\n\n");
		printf("1) vedi pizze\n");
		printf("2) inserisci pizza\n");
		printf("3) togli pizza dall'ordine\n");
		printf("0) exit\n");
		scanf_s("%d",&scelta);
		
		if (scelta==1)
		{
			stampaPizza(head);
		}else{
			if (scelta==2)
			{
				inserimentoTesta(head);
			}else{
				if (scelta==3)
				{
					/* code */
				}
			}
		}
	
	}
	return 0;
}