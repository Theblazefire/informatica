#include <stdio.h>
#include <stdlib.h>
/*
=========================================
DIVIDI INTERI
=========================================

Scrivere un programma che legge due interi introdotti dall'utente e stampa il quoziente ed il resto della divisione intera fra il più grande ed il più piccolo dei due interi. Il programma non deve utilizzare nessuna variabile di tipo int, ma solo variabili di tipo int*.

Devono essere definite le seguenti funzioni:

int * allocaMemoria() che alloca memoria per un intero e restituisce l'indirizzo dell'area di memoria allocata.

void leggiValore(int * variabile) che legge un valore introdotto dall'utente e lo memorizza all’indirizzo specificato nel parametro formale.

void riordina(int * a, int * b) che riordina due valori interi, di cui sono forniti gli indirizzi nei parametri formali, così che il primo sia più grande del secondo.

void calcolaQuoziente(int* dividendo, int* divisore, int* quoziente) che calcola il quoziente della divisione intera fra due interi, di cui sono forniti gli indirizzi nei parametri formali, e memorizza tale quoziente all’indirizzo specificato nel parametro formale.

void calcolaResto(int* dividendo, int* divisore, int* resto) che calcola il resto della divisione intera fra due interi, di cui sono forniti gli indirizzi nei parametri formali, e memorizza tale resto all’indirizzo specificato nel parametro formale.

int main() che gestisce l’interazione con l’utente, invocando le altre funzioni per allocare memoria, leggere i valori introdotti dall’utente, ordinarli dal più grande al più piccolo, e calcolare e stampare il quoziente ed il resto della divisione intera fra i due interi.
*/
void calcolaResto(int* divd, int* divs)
{
	int resto=*divd % *divs;
	*(Npunta[4])=resto;
	printf("resto= %d\n",*(Npunta[4]) );
}
void calcolaQuoziente(int* divd, int* divs)
{
	int quoz=*divd / *divs;
	*(Npunta[3])=quoz;
	printf("Quoziente= %d\n", *(Npunta[3]));
	calcolaResto(divd,divs);

}
void riordina(int* a, int* b)
{
	int min=0;
	int Max=0;
	if (*a>*b)
	{
		Max=*a;
		min=*b;
	}
	else
	{
		Max=*b;
		min=*a;
	}
 calcolaQuoziente(&Max, &min, Npunta);

}
//prendi numeri
void input(int *Npunta)
{
	printf("Primo Numero\n");
	scanf_s("%d", &Npunta[0]);
	printf("Secondo Numero\n");
	scanf_s("%d", &Npunta[1]);

}
/*assegna una sezione 
di memoria al puntatore*/
int* allocaMemoria()
{
	int *M_Npunta=(int*)malloc(4*sizeof(int));
	return M_Npunta;
}
/*funz principale*/
int main()
{
	/*input*/
	int *Npunta;
	//assegna memoria
	Npunta=allocaMemoria();
	printf("faccio la divisione e ti do il quozionte e il resto\n"); 
	printf("insersci 2 numeri\n");
	input(Npunta);
	riordina(&Npunta[0],&Npunta[1]);
//svuota la memoria
free(Npunta);
	return 0;
}