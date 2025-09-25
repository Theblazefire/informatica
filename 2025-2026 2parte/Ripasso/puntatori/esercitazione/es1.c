/*
=========================================
DIVIDI INTERI
=========================================

Scrivere un programma che legge due interi 
introdotti dall'utente e stampa il quoziente 
ed il resto della divisione intera fra il più 
grande ed il più piccolo dei due interi. 
Il programma non deve utilizzare nessuna 
variabile di tipo int, ma solo variabili di tipo int*.

Devono essere definite le seguenti funzioni:

int * allocaMemoria() che alloca memoria 
per un intero e restituisce 
l'indirizzo dell'area di memoria allocata.

void leggiValore(int * variabile) 
che legge un valore introdotto 
dall'utente e lo memorizza 
all’indirizzo specificato nel 
parametro formale.

void riordina(int * a, int * b) 
che riordina due valori interi, 
di cui sono forniti gli indirizzi 
nei parametri formali, così che il 
primo sia più grande del secondo.
----------------------------------------------------------------------

void calcolaQuoziente(int* dividendo, int* divisore, int* quoziente) 
che calcola il quoziente della divisione intera fra due interi, 
di cui sono forniti gli indirizzi nei parametri formali, 
e memorizza tale quoziente 
all’indirizzo specificato nel parametro formale.

void calcolaResto(int* dividendo, int* divisore, int* resto) 
che calcola il resto della divisione intera fra due interi, 
di cui sono forniti gli indirizzi nei parametri formali, 
e memorizza tale resto all’indirizzo specificato nel parametro formale.

int main() che gestisce l’interazione con l’utente, 
invocando le altre funzioni per allocare memoria, 
leggere i valori introdotti dall’utente, 
ordinarli dal più grande al più piccolo, e 
calcolare e stampare il quoziente ed il resto 
della divisione intera fra i due interi.
*/
#include <stdio.h>
#include <stdlib.h>
void calcolaResto(int* dividendo, int* divisore, int* resto){
		*resto=*dividendo% *divisore;
		printf("Resto=%d\n",*resto);
}

//SVOLGI LA DIVISIONE
void calcolaQuoziente(int* dividendo, int* divisore, int* quoziente){
*quoziente= *dividendo / *divisore;
printf("Svolgo la divisione\n%d / %d = %d \n",*dividendo,*divisore,*quoziente );
}

//ordina dal più grande al più piccolo
void riordina(int* a, int* b){
	if (*b>*a)
	{
		int c=*b;
		*b=*a;
		*a=c;
		printf("Ordine crescente i numeri\n%d,%d\n",*a,*b );
		// 1  20
		// a   b
	}
} 

//leggi input
void leggiValore(int * variabile)
{
		printf("inserisci un numero\n");
		scanf("%d",variabile);
}

//allocata memoria
int* allocaMemoria()
{
	return malloc(1*sizeof(int));
}
//funzione principale
int main()
{
	int* Pn1=allocaMemoria();
	int* Pn2=allocaMemoria();
	int* Q=allocaMemoria();
	int* resto=allocaMemoria();
	
	printf("ciao sono un programma che fa divisioni\n");
	leggiValore(Pn1);
	leggiValore(Pn2);
	riordina(Pn1,Pn2);
	calcolaQuoziente(Pn1,Pn2,Q);
	calcolaResto(Pn1,Pn2,resto);
	return 0;
}