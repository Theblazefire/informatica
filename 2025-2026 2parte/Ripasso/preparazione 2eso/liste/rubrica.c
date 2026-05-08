#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Persona{
	int cellulare;
	char nome[50];
}PERSONA;

typedef struct nodo{
	PERSONA info;
	struct nodo* next;
}NODO;

NODO* creaNodo(PERSONA x){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("errore di allocamento in memoria del nodo\n");
	}else{
		nuovoNodo->info= x;
		nuovoNodo->next=NULL;
	}
	
	return nuovoNodo;
}

NODO* inserInCoda(NODO* head,PERSONA p){
	NODO* nuovoNodo= creaNodo(p);
	if (head==NULL)
	{
		return	nuovoNodo;	
	}
	NODO* curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=nuovoNodo;
	return head;

}

NODO* inserTesta(NODO* head, PERSONA x){
	NODO* nuovoNodo= creaNodo(x);
	if (head==NULL)
	{
		return	nuovoNodo;
	}

	nuovoNodo->next=head;
	head=nuovoNodo;
	return	head;
}

NODO* inserOrdinato(NODO* head, PERSONA	x){
	NODO* nuovoNodo= creaNodo(x);
	if (nuovoNodo==NULL)
	{
		printf("errore memoria non allocata\n");
	}

	if (head==NULL || strcmp(x.nome,head->info.nome)<0)//è in testa?
	{
		inserTesta(head,x);
	}

	//cercalo nella lista
	NODO* curr=head;
	NODO* nodoPrec=NULL;
	while(curr->next!=NULL && strcsmp(x.nome,curr->info.nome)>0){
		nodoPrec=curr;
		curr=curr->next;
	}

	nodoPrec->next=nuovoNodo;
	nuovoNodo->next=curr;
	return head;
}
void caricaLista(NODO*head){
	FILE* fp= fopen("rubrica.dat","rb");
	if (fp==NULL)
	{
		printf("file non trovato\n");
	}else{
		PERSONA p;
		while(fread(&p,sizeof(PERSONA),1,fp)){
			head=inserInCoda(head,p);
		}
	}
}

PERSONA inserContatto(){
	PERSONA p;
	printf("Nome contatto caratteri max 50\n");
	fgets(p.nome,50,stdin);
	p.nome[strcspn(p.nome,"\n")]='\0';//cerco e sostituisco invio di conferma

	printf("inserisci numero\n");
	scanf_s("%d%*c",&(p.cellulare));

	return p;
}

int main(){
	NODO* head = NULL;
	int scelta = -1;
	PERSONA p;

	caricaLista(head);

	while(scelta != 0){
		printf("\nMenu rubrica\n");
		printf("1) leggi contatti\n");
		printf("2) inserisci contatto\n");
		printf("3) inserisci per primo il contatto\n");
		printf("4) inserisci per ultimo il contatto\n");
		printf("5) metti in ordine la rubrica\n");
		printf("6) cancella un contatto\n");
		printf("7) cancella il primo contatto\n");
		printf("8) cancella l'ultimo contatto\n");
		printf("9) salva localmente\n");
		printf("0) esci\n");
		printf("\nInserisci numero di azione\n");
		scanf_s("%d%*c", &scelta);

		if (scelta == 1)
		{
			printf("Lettura contatti non ancora implementata\n");
		}else{
			if (scelta == 2)
			{
				p = inserContatto();
				head = inserInCoda(head, p);
			}else{
				if (scelta == 3)
				{
					p = inserContatto();
					head = inserTesta(head, p);
				}else{
					if (scelta == 4)
					{
						p = inserContatto();
						head = inserInCoda(head, p);
					}else{
						if (scelta == 5)
						{
							p=inserContatto();
							head=inserimento_ordinato(head,p);
						}else{
							if (scelta == 6)
							{
								printf("Cancellazione contatto non ancora implementata\n");
							}else{
								if (scelta == 7)
								{
									printf("Cancellazione primo contatto non ancora implementata\n");
								}else{
									if (scelta == 8)
									{
										printf("Cancellazione ultimo contatto non ancora implementata\n");
									}else{
										if (scelta == 9)
										{
											printf("Salvataggio non ancora implementato\n");
										}else{
											if (scelta == 0)
											{
												printf("Uscita dal programma\n");
											}else{
												printf("Scelta non valida\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}