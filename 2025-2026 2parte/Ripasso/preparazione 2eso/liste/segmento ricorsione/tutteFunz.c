#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int info;
	struct nodo* next;
}NODO;
NODO* creaNodo(int x){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("error\n");
	}else{
		nuovoNodo->info=x;
		nuovoNodo->next=NULL;
		return nuovoNodo;
	}
}

NODO* inserTesta(NODO* head,int x){
	NODO* nuovoNodo=creaNodo(x);
	if (head==NULL)
	{
		return nuovoNodo;
	}else{
		nuovoNodo->next=head;
	}
	return nuovoNodo;
}

void printLista(NODO* head){
	if (head==NULL)
	{
		printf("lista vuota\n");
	}else{
		NODO* curr=head;
		while(curr!=NULL){
			printf("[%d|*]-> ", curr->info);
			curr=curr->next;
		}
	}
}

//tringhe
/*
NODO* inserimento_ordinato(NODO* head){
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
		NODO* curr = head; 
		while(curr!=NULL && strcmp(nuovoNodo->d.titolo,curr->d.titolo)>0){
			savePrec=curr;
			curr=curr->next;
		}
		savePrec->next=nuovoNodo;
		nuovoNodo->next=curr;
	}
	return head;
}
*/
//per numeri
/*
Nodo* inserisciOrdinato(Nodo* head, int valore) {
    Nodo* nuovo = creaNodo(valore);

    if (head == NULL || valore <= head->valore) {
        nuovo->next = head;
        return nuovo;
    }

    Nodo* temp = head;
    while (temp->next != NULL && temp->next->valore < valore) {
        temp = temp->next;
    }

    nuovo->next = temp->next;
    temp->next = nuovo;

    return head;
}
*/

NODO* inserOrdi(NODO* head,int x){
	NODO* nuovoNodo=creaNodo(x);
	if (head==NULL)
	{
		return nuovoNodo;
	}else{
		if (x<head->info){
			nuovoNodo->next=head;
		}else{
			NODO* curr=head;
			//mi fermo vedendo quello dopo il corrente
			while(curr->next!=NULL && curr->next->info<x){
				curr=curr->next;
			}
			//il nuovo mi si collega al dopo il corrente
			nuovoNodo->next=curr->next;
			//il corrente si collega al nuovo
			curr->next=nuovoNodo;
		}
	}

}
int main(){
	NODO* head=NULL;
	int scelta=-1;
	while(scelta!=0){
		printf("MENU\n");
		printf("1) Inserisci in testa\n");
		printf("2) stampa lista\n");
		scanf_s("%d",&scelta);
		if (scelta==1)
		{
			int a=0;
			scanf_s("%d%*c",&a);
			head=inserTesta(head,a);
		}else{
			if (scelta==2)
			{
				printLista(head);
			}
		}
	}
	return 0;
}