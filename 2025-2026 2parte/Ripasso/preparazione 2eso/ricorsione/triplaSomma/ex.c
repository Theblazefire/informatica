/*
Realizzare un'applicazione TriplaSommaMassima definita come segue.
L’applicazione contiene una funzione ricorsiva triplaSommaMassima che determina, all’interno di un
array di interi ricevuto come parametro, la massima somma di tre interi adiacenti nell’array. Ad
esempio, l’istanza [4, -2, 5, 7, -1, -2] del problema ha soluzione 11, in quanto fra le triple di interi
adiacenti nell’array (ovvero [4, -2, 5], [-2, 5, 7], [5, 7, -1], [7, -1, -2]) quella che ha somma massima
(ovvero [5, 7, -1]) ha somma 11.

La funzione triplaSommaMassima ha due parametri: l’array e la sua lunghezza. Nel caso in cui si
desideri utilizzare un terzo parametro per realizzare la ricorsione, deve essere definita un’ulteriore
funzione triplaSommaMassimaRic che ha tre parametri e che realizza la ricorsione. In tal caso la
funzione triplaSommaMassima invoca la funzione triplaSommaMassimaRic (fornendole opportuni
parametri) per calcolare il risultato.

L’applicazione contiene una funzione main che gestisce l’interazione con l’utente. La funzione chiede
all’utente la lunghezza della sequenza che vuole inserire. Dopo aver letto e memorizzato tale
sequenza in un array, viene stampato un messaggio che indica la massima somma di tre interi
adiacenti nell’array. La funzione termina salvando il contenuto dell’array su di un file. Il file si deve
chiamare interi.dat (nel caso sia binario) oppure interi.txt (nel caso in cui sia testuale). La scelta se
utilizzare un file binario oppure un file di testo è lasciata allo studente.
La funzione main è già parzialmente implementata in un file Ricorsione.c.
*/
#include <stdio.h>
int triplaSommaMassimaRic(int* sca,int n,int i,int max){
	if (i>=n-2)
	{
		return max;
	}else{
		int	som=sca[i]+sca[i+1]+sca[i+2];
		if (max<som)
		{
			max=som;
		}
		return triplaSommaMassimaRic(sca,n,i+1,max);
	}
}
int triplaSommaMassima(int* sca,int n){
	if (n<3)
	{
		return 0;
	}

	int max=sca[0]+sca[1]+sca[2];
	return triplaSommaMassimaRic(sca,n,0,max);
}
int main(){
	if (n<3)
	{
		printf("troppo piccolo\n");
	}
	int sca[n];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d",sca[i]);
	}

if(triplaSommaMassima(sca,n)){
	printf(":)\n");
}else{
	printf(":(\n");
}	