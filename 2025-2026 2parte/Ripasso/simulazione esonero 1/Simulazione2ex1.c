/*ESERCIZIO ARRAY 1 (8 punti)
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi di
almeno 3 elementi, verificare se ogni tripla di interi consecutivi nella sequenza contiene esattamente
due interi divisibili per tre, dei quali almeno uno negativo. Ad esempio, la sequenza [2, -3, 6, 5, -6, -9] è
un’istanza positiva del problema, in quanto le triple [2, -3, 6], [-3, 6, 5], [6, 5, -6] e [5, -6, -9] contengono
ciascuna esattamente due interi divisibili per tre, dei quali almeno uno negativo. Viceversa, le
sequenze [-3, -6, 6] e [3, 5, 6] sono istanze negative del problema.
Consegnare un foglio con nome, cognome e matricola contenente:
• la specifica del problema
• il tipo di problema (accumulazione, conteggio, ver. esistenziale, ver. universale, minimo/massimo).
• un diagramma a blocchi che illustra un algoritmo risolutivo per il problema.
Consegnare su moodle (al link Consegna compito C – Array 1) una funzione C funzioneArray1 con
parametri: 1) un riferimento ad un array di interi; e 2) un intero che rappresenta la lunghezza dell’array.
La funzione restituisce 1 se ogni tripla di interi consecutivi nella sequenza contiene esattamente due
interi divisibili per tre, dei quali almeno uno negativo, restituisce 0 altrimenti.
*/
/*SPECIFICA
INTPUT: arrey con n elementi
pre-condizione: n>=3 con elementi interi,
OUTPUT: rilascia ver
post-condizione: ver è versa se ogni tripla di interi consecutivi nella sequenza contiene esattamente
due interi divisibili per tre, dei quali almeno uno negativo. altrimenti ver è negativa cioè 0
*/
#include <stdio.h>
int verifica(int* sca,int n){
	int i=0;
	int ver=1;
	while(i<n-2&&ver){
		int prim=sca[i];
		int sec=sca[i+1];
		int terz=sca[i+2];
		int div=0;
		int neg=0;
		
		//divisibili per 3
		if(prim%3==0){
			div++;
		}
		if(sec%3==0){
			div++;
		}
		if(terz%3==0){
			div++;
		}

		//negativi
		if(prim<0){
			neg++;
		}
		if(sec<0){
			neg++;
		}
		if(terz<0){
			neg++;
		}		
		if(neg<1||div!=2) ver=0;
		i++;
	}
	return ver;
}
int main(){
	printf("inserisci la lunghezza della sequenza\n");
	int n;
	scanf("%d",&n);
	if(!(n<3)){
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci il %d%c della sequenza\n",i+1,167 );
			scanf("%d",&sca[i]);
		}

		int risultato = verifica(sca, n);
		if(risultato){
			printf("La sequenza soddisfa le condizioni\n");
		} else {
			printf("La sequenza NON soddisfa le condizioni\n");
		}
	}else{
		printf("accetto solo 3 elementi	\n");
	}
}