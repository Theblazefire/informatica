#include <stdio.h>
#include <stdlib.h>

typedef struct punto{
	float x;
	float y;
}PUNTO;

typedef struct Segmento{
	int ln;//lunghezza
	PUNTO sinistro;
}SEGM;

typedef struct Nodo{
	struct Nodo* next;
	SEGM info; 
}NODO;

void printLista(NODO* head){
	if (head==NULL)
	{
		printf("lista vuota\n");
	}
	NODO* curr=head;
	while(curr!=NULL){
		printf("punto	sinistro(%2.f, %2.f)\npunto destro (%2.f, %2.f),lunghezza %d",curr->info.sinistro.x,curr->info.sinistro.y,curr->info.sinistro.x+curr->info.ln,curr->info.sinistro.y,curr->info.ln);
		curr=curr->next;
	}
}
//ric
void stampaSeg(SEGM s){
	printf("punto	sinistro(%2.f, %2.f)\npunto destro (%2.f, %2.f),lunghezza %d\n",s.sinistro.x,s.sinistro.y,s.sinistro.x+s.ln,s.sinistro.y, s.ln);
}

void stampaListaRic(NODO* head){
	if(head!=NULL){
		stampaSeg(head->info);
		stampaListaRic(head->next);
	}
}

NODO* cancValore(NODO* head,int ln){
	if (head==NULL)
	{
		printf("lista vuota	\n");
	}else{
		if (head->info.ln==ln)
		{
			NODO* curr=head;
			head=head->next;
			free(curr);
		}else{
			NODO* nodoPrec=head;
			NODO* curr=head->next;
			int cancelato=0;
			while(curr!=NULL&&!cancelato){
				if (curr->info.ln==ln)
				{
					nodoPrec->next=curr->next;
					free(curr);
					cancelato=1;
				}else{
					nodoPrec=curr;
					curr=curr->next;
				}
			}
		}		
	}
	return	head;
}

SEGM dammiSEG(){
	SEGM s;
	printf("archivio i segmenti\n");
	printf("dammi il punto sinistro del segmento\n");
	printf("cordinata x del punto sinistro\n");
	scanf_s("%d%*c",&s.sinistro.x);
	printf("cordinata y del punto sinistro\n");
	scanf_s("%d%*c",&s.sinistro.y);
	printf("dammi lunghezza	(ln)\n");
	scanf_s("%d%*c",&s.ln);
	return s;
}

NODO* creaNodo(SEGM	s){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf(" spazio non disponibile\n");
	}else{
		nuovoNodo->info=s;
		nuovoNodo->next=NULL;
		return	nuovoNodo;
	}
}

NODO* inserTail(NODO* head,SEGM	s){
	if (head==NULL)
	{
		printf("non ho pututo allocare ultimo elemento per spezio non disponibile\n");
	}else{
		NODO* nuovoNodo=creaNodo(s);
		NODO* curr=head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=nuovoNodo;
	}
	return head;
}
int main() {
    NODO* head = NULL;
    int scelta;
    int lnDaCancellare;
    SEGM s;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inserisci segmento\n");
        printf("2. Stampa lista iterativa\n");
        printf("3. Stampa lista ricorsiva\n");
        printf("4. Cancella segmento per lunghezza\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                s = dammiSEG();
                head = inserTail(head, s);
                break;

            case 2:
                printLista(head);
                break;

            case 3:
                stampaListaRic(head);
                break;

            case 4:
                printf("Inserisci la lunghezza da cancellare: ");
                scanf("%d", &lnDaCancellare);
                head = cancValore(head, lnDaCancellare);
                break;

            case 0:
                printf("Uscita...\n");
                break;

            default:
                printf("Scelta non valida\n");
        }

    } while (scelta != 0);

    while (head != NULL) {
        NODO* tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}