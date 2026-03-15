/*TIPO CONTEGGIO/ACCUMULAZIONE
Esercizio B2 (7 punti): Ricorsione 
Realizzare un'applicazione NumeroCoppieUguali definita come segue. 

(4pt) L’applicazione contiene una funzione ricorsiva numeroCoppieUguali che conta, all’interno di un 
array di interi ricevuto come parametro, quante coppie di interi adiacenti uguali sono presenti 
nell’array. Ad esempio, l’istanza [1, 1, 2, 3, 3, 3, 3] del problema ha soluzione 4, in quanto fra le coppie 
di interi adiacenti nell’array (ovvero [1, 1], [1, 2], [2, 3], [3, 3], [3, 3], [3, 3]) ce ne sono 4 composte da 
interi fra loro uguali.  
La funzione numeroCoppieUguali ha due parametri: l’array e la sua lunghezza. Nel caso in cui si 
desideri utilizzare un terzo parametro per realizzare la ricorsione, deve essere definita un’ulteriore 
funzione numeroCoppieUgualiRic che ha tre parametri e che realizza la ricorsione. In tal caso la 
funzione numeroCoppieUguali invoca la funzione numeroCoppieUgualiRic (fornendole opportuni 
parametri) per calcolare il risultato. 

(0.5pt) In un commento che precede la funzione numeroCoppieUguali descrivere il tipo di problema 
(accumulazione/conteggio/verifica esistenziale/verifica universale/minimo-massimo/ricerca) che è 
risolto dall’algoritmo implementato dalla funzione numeroCoppieUguali. 
(1pt) In un commento che precede la funzione numeroCoppieUguali descrivere la specifica della 
funzione numeroCoppieUguali (espressa come Input-Precondizione-Output-Postcondizione). 

(1.5pt) L’applicazione contiene una funzione main che gestisce l’interazione con l’utente. La funzione 
chiede all’utente la lunghezza della sequenza che vuole inserire. Dopo aver letto e memorizzato tale 
sequenza in un array, viene stampato un messaggio che indica quante coppie di interi adiacenti 
uguali sono presenti nell’array. La funzione termina salvando il contenuto dell’array su di un file. Il file si 
deve chiamare interi.dat (nel caso sia binario) oppure interi.txt (nel caso in cui sia testuale). La scelta 
se utilizzare un file binario oppure un file di testo è lasciata allo studente. 
La funzione main è già stata parzialmente implementata in un file ricorsione.c (ad eccezione dei 
messaggi finali e del salvataggio dei dati) il cui codice può essere scaricato e copiato da moodle. 

*/
#include <stdio.h>
#include <stdlib.h>
int numeroCoppieUgualiRic(int* sca,int n,int i){
	int count;
	if(i>=n-1){
		count=0;
	}else{
		if (sca[i]==sca[i+1])
		{
			count=1+numeroCoppieUgualiRic(sca,n,i+1);
		}else{
			count=numeroCoppieUgualiRic(sca,n,i+1);
		}
	}
	return count;
}
int numeroCoppieUguali(int*sca,int n){
	return numeroCoppieUgualiRic(sca,n,0);
}
int main(){
	
	int n;
	int* scatola;
	FILE* fp;
	printf("ciao sono un programma che conta le coppie consecutive di numeri consecutivi\n");
	//input
	printf("inserisci lunghezza\n");
	scanf("%d",&n);
	/*Arrey*/
	scatola=(int*)malloc(n*sizeof(int));
	if (scatola == NULL) {
        printf("Errore di allocazione memoria.\n");
        return 1;
    }
    //output
    for (int i = 0; i < n; i++)
    {
    	printf("inserisci elemento %d della sequenza\n",i );
    	scanf("%d",&scatola[i]);
    }
    printf("ho trovato %d coppie uguali\n",numeroCoppieUguali(scatola,n) );
    //FILE
    fp=fopen("interi.txt","w");
    	if(fp==NULL){
    		printf("errore in apertura\n");
    		free(scatola);
    		return 1;
    	}
    	fprintf(fp, "%d\n", n);
    	for (int i = 0; i < n; i++)
    	{
    		fprintf(fp,"%d ",scatola[i]);
    	}
    fclose(fp);
    free(scatola);
}