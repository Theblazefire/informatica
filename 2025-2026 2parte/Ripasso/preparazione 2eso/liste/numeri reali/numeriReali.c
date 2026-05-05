#include <stdio.h>
#include <stdlib.h>

typedef struct numeriReali{
	int unita;
	int decina;
}NUM_REALI;

typedef struct Nodo{
	NUM_REALI info;
	struct Nodo* next;
}NODO;
NODO* creaNodo(NODO* head,NUM_REALI x){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	nuovoNodo->info=x;
	nuovoNodo->next=NULL;
	return nuovoNodo;
}
NODO* nuovaTesta(NODO* head){
	int u;
	int d;
	NUM_REALI temp;

	printf("inserisci l'unita' del numero che inserisco in testa\n");
	scanf_s("%d",&u);
	printf("inserisci la decina del numero che inserisco in testa\n");
	scanf_s("%d",&d);

	temp.unita=u;
	temp.decina=d;
	NODO* nuovoNodo=creaNodo(head,temp);
	nuovoNodo->next=head;
	return nuovoNodo;
}
int main(){
	NODO* head=NULL;
	int scelta=-1;
	printf("Posso creare un lista di numeri reali\n");
	while(scelta!=0){
		printf("scegli una opzione:\n");
		printf("1) inserisci in testa\n");
		printf("2) inserisci in coda\n");
		printf("3) mostra lista\n");
		printf("0)esci\n");
		scanf_s("%d",&n);
		if (n==1)
		{
			head=nuovaTesta(head);
		}
	}
	return 0;
}