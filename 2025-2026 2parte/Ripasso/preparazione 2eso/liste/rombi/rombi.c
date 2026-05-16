/*
L’applicazione deve gestire ciascun rombo come una struttura con tre campi, che rappresentano 
•	il vertice in alto (a in figura), 
•	il vertice in basso (b in figura) e 
•	la lunghezza della diagonale orizzontale (d in figura). 
Inoltre ciascun vertice deve essere gestito come una struttura con due campi, che rappresentano le coordinate del vertice nel piano. 
L’applicazione deve permettere all’utente di svolgere le seguenti funzionalità.
•	Inserimento di un nuovo rombo in testa alla lista, dopo aver letto la lunghezza della diagonale orizzontale e le coordinate dei due vertici a e b (deve essere letta la coordinata x di un solo vertice fra a e b, in quanto x(a)=x(b)).
•	Cancellazione dell’ultimo rombo della lista.
•	Visualizzazione della lista corrente di rombi, ciascuno comprensivo di:
o	vertice in alto, vertice in basso e lunghezza della diagonale orizzontale
o	perimetro 
o	area e 
o	indicazione se il rombo è un quadrato oppure no.
Promemoria: Un rombo è “composto” da quattro triangoli rettangoli uguali, osservazione che, applicando il teorema di Pitagora, permette di calcolare il perimetro del rombo.  
All’avvio dell’esecuzione l’applicazione deve inizializzare la lista di rombi con i valori letti da un file; al termine dell’esecuzione l’applicazione deve salvare i dati della lista nello stesso file.

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct punto{
	int x;
	int y;
}PUNTO;

typedef struct rombo{
	PUNTO Vert_alto;
	PUNTO Ver_basso;
	int diagonale;//lunghezza
}ROMBO;

typedef struct nodo{
	ROMBO info;
	struct nodo* next;
}NODO;
void dammipunto(PUNTO p){
	printf("dammi la x:\n");
	scanf_s("%d%*c",p);
	printf("dammi la y:\n");
	scanf_s("%d%*c",p);
}
ROMBO prendiRombi(){
	ROMBO r;
	printf("dammi il vertice piu' alto\n");
	dammipunto(r.Vert_alto.x)
	dammipunto(r.Vert_alto.y)

	printf("dammi il vertice basso\n");
	dammipunto(r.Vert_basso.x);
	dammipunto(r.Vert_basso.y);

	printf("%s\n", );
	return r;
}

NODO* creaNodo(ROMBO x){
	NODO* nuovoNodo=malloc(sizeof(NODO));
	if (nuovoNodo==NULL)
	{
		printf("nuovoNodo non e' stato possibile allocare\n");
	}else{
		nuovoNodo->info=x;
		nuovoNodo->next=NULL;
	}
	return nuovoNodo;
}

NODO* inserTesta(NODO* head,ROMBO x){
	
	NODO* nuovoNodo= creaNodo(x);
	if (head==NULL)
	{
		return nuovoNodo;
	}else{
		nuovoNodo->next=head;
	}
	return nuovoNodo;
}
/*funzione che calcola la diagonale  parallela all'asse y*/
int dM (ROMBO r) {
    return abs(r.a.y-r.b.y);
}

int area (ROMBO r) {
    int dY = dM(r); //la diagonale  parallela all'asse y
    return  (abs(r.d)*dY)/2;
}

int perimetro (ROMBO r) {
    double a = r.d/2;
    double b = dM(r)/2;
    return 4 * sqrt(pow(a, 2) + pow(b, 2));
}

int isQuadrato(ROMBO r ) {
    return r.d == dM(r);
}

void stampaRombo(ROMBO r) {
    printf("---------------ROMBO---------------\n");
    printf("vertice in alto: (%d; %d);\n", r.a.x, r.a.y);
    printf("vertice in basso: (%d; %d);\n", r.b.x, r.b.y);
    printf("perimetro: %.2f\n", perimetro(r));
    printf("area: %d\n", area(r));
    printf("Il rombo %s un quadrato\n", isQuadrato(r) ? "e'" : "non e'" );
    printf("-----------------------------------\n");
}

NODO* cancTail(NODO* head){
	if (head==NULL)
	{
		printf("lista vuota\n");
	}else{
		if (head->next==NULL)
		{
			free(head);
			head=NULL;
		}else{
			NODO* curr=head;
			while(curr->next->next!=NULL){
				curr=curr->next;
			}
			free(curr->next);
			curr->next=NULL;
		}
		

	}
	return head;
}

void printLista(NODO* head){
	while(head!=NULL){
		stampaRombo(head->info);
		head=head->next;
	}
}

NODO* ImportFile(){
	FILE* fp=fopen("nomeFile.dat","rb");
	NODO* capa = NULL;
	if (fp==NULL)
	{
		printf("file inesistente!\n");
	} else {
		ROMBO r;
		NODO curr = capa;
		while(fread(r,sizeof(ROMBO),1,fp)){
			curr = creaNodo(r);
			curr=curr->next;
		}
	}
	fclose(fp);
	return capa;
}

void exportFile(NODO* head){
	if (head==NULL)
	{
		printf("nessuna lista\n");
	}else{
		ROMBO r;
		FILE* fp=fopen("nomeFile.dat","wb");
		if(fp==NULL) {
			//fai qualcosa
		} else {
			while(head!=NULL) {
				fwrite(head->info, sizeof(ROMBO, 1, fp));
				head =head->next;
			}
			fclose(fp);
		}
	}
}

NODO* deletList(NODO* head){
	if (head!=NULL)
	{
		NODO* curr=head;
		head=head->next;
		free(curr);
		return deletList(head);		
	}
	return NULL;
}
int main(){

}