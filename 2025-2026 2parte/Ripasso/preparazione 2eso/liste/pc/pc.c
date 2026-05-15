/*
Esercizio 3 (14 punti): Liste 
Realizzare un'applicazione Computer per gestire i computer di un laboratorio. L’utente 
dell’applicazione è il gestore del laboratorio.  

(1pt) Definire due strutture, per rappresentare un elemento della lista ed un computer. In particolare, 
l’applicazione deve gestire ciascun computer come una struttura con tre campi. Il primo campo è 
una stringa che indica il modello del computer (ad esempio “HP 225W1EA”). Il secondo campo è un 
codice identificativo intero che identifica univocamente il computer all’interno del laboratorio (ad 
esempio 13). Il terzo campo è un array di 12 interi (ciascuno ad una singola cifra) che indica l’indirizzo 
IP del computer (ad esempio 1 5 1 0 2 4 1 5 8 1 4 2).  

(2pt) L’applicazione contiene una funzione visualizzaLab che permette di visualizzare la lista di 
computer del laboratorio. Per ciascuno computer, devono essere visualizzati il modello, il codice 
identificativo e l’indirizzo IP; quest’ultimo va visualizzato inserendo un punto dopo ciascuna tripla di 
cifre (ad esempio, per il computer di cui sopra, la visualizzazione potrebbe dire “Il computer è di 
modello HP 225W1EA, ha codice identificativo 125 ed indirizzo IP 151.024.158.142”). 

(2pt) L’applicazione contiene una funzione esisteComputer che, oltre alla lista, prende come 
parametro un intero e restituisce 1 se esiste un computer nella lista che ha quel codice identificativo, 0 
altrimenti. 

(2.5pt) L’applicazione contiene una funzione cancellaComputer che cancella il primo computer dalla 
lista. 

(6pt) L’applicazione contiene una funzione inserisciComputer che inserisce un nuovo computer in 
coda alla lista. Il modello del computer ed il codice IP devono essere inseriti dall’utente, mentre il 
codice identificativo deve essere il più piccolo intero positivo che non è già il codice identificativo di 
un altro computer della lista. 

(0.5pt) L’applicazione contiene una funzione main che, dopo aver creato una lista di computer 
inizialmente vuota, ripetutamente chiede all’utente che operazione vuole svolgere fra quelle sopra 
elencate, oppure se vuole terminare l’applicazione.  La funzione main è già stata parzialmente 
implementata in un file liste.c il cui codice può essere scaricato e copiato da moodle.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct computer{
	char model[50];
	int id;
	int ip[50];
}PC;

typedef struct nodo{
	PC info;
	struct nodo* next;
}NODO;

void visualizzaLab(NODO* head){
	if (head==NULL)
	{
		printf("lista vuota\n");
	}
	NODO* curr=head;
	while(curr!=NULL){
		
	}
}