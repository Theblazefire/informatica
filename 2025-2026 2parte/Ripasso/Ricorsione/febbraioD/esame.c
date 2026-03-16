/*TIPO UNIVERSALE
Esercizio D2 (6 punti): Ricorsione 
Realizzare un'applicazione Successione definita come segue. 

(4pt) L’applicazione contiene una funzione ricorsiva verificaSuccessione che verifica, all’interno di un 
array di interi ricevuto come parametro, se per ogni tripla di elementi consecutivi la somma del primo 
e del secondo elemento della tripla è uguale alla differenza tra il terzo e il secondo elemento della 
tripla. Ad esempio, la funzione deve restituire 1 se l’array parametro è [3, 5, 13, 31,75], in quanto 
3+5=13-5 per la prima tripla, 5+13=31-13 per la seconda tripla e 13+31=75-31. Se l’array parametro è 
[3, 5, 10, 25], la funzione deve invece restituire 0, in quanto 3+5!=10-5. 
La funzione verificaSuccessione ha due parametri: l’array e la sua lunghezza. Nel caso in cui si desideri 
utilizzare un terzo parametro per realizzare la ricorsione, deve essere definita un’ulteriore funzione 
verificaSuccessioneRic che ha tre parametri e che realizza la ricorsione. In tal caso la funzione 
verificaSuccessione invoca la funzione verificaSuccessioneRic (fornendole opportuni parametri) per 
calcolare il risultato. 

(0.5pt) In un commento che precede la funzione verificaSuccessione descrivere il tipo di problema 
(accumulazione/conteggio/verifica esistenziale/verifica universale/minimo-massimo/ricerca) che è 
risolto dall’algoritmo implementato dalla funzione verificaSuccessione. 

(1pt) In un commento che precede la funzione verificaSuccessione descrivere la specifica della 
funzione verificaSuccessione (espressa come Input-Precondizione-Output-Postcondizione). 

(0.5pt) L’applicazione contiene una funzione main che gestisce l’interazione con l’utente. La funzione 
chiede all’utente la lunghezza della sequenza che vuole inserire. Dopo aver letto e memorizzato tale 
sequenza in un array, viene stampato un messaggio che indica se per ogni tripla di elementi adiacenti 
la somma del primo e del secondo elemento della tripla è uguale alla differenza tra il terzo e il 
secondo elemento della tripla. 
*/
#include <stdio.h>
#include <stdlib.h>
int verificaSuccessioneRic(int* sca,int n,int i){
	if (i>=n-2)
	{
		return 1;
	}else{
		return( sca[i]+sca[i+1]==sca[i+2]-sca[i+1]
			)&&verificaSuccessioneRic(sca,n,i+1);
	}

}
int verificaSuccessione(int* sca,int n){
	return verificaSuccessioneRic(sca,n,0);
}


int main() {
    int n;
    int* scatola;

    printf("Inserisci lunghezza: ");
    scanf("%d", &n);

    scatola = (int*)malloc(n * sizeof(int));  // fix 1

    for (int i = 0; i < n; i++) {
        printf("Inserisci elemento %d: ", i);
        scanf("%d", &scatola[i]);             // fix 2
    }

    if (verificaSuccessione(scatola, n))      // fix 2
        printf(":)\n");                        // fix 3
    else
        printf(":(\n");

    free(scatola);
    return 0;
}