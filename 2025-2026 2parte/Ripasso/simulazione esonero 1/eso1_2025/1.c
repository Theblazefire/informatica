/*
ESERCIZIO ARRAY 1 (9 punti)
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di almeno tre
interi, verificare che in ogni tripla di interi consecutivi nella sequenza ci sia almeno un numero pari e
che la somma degli altri due sia un divisore di 60. Ad esempio, la sequenza [14, 8, -5, 6, 3] è un’istanza
positiva del problema, in quanto le triple [14, 8, -5], [8, -5, 6] e [-5, 6, 3] contengono rispettivamente 14
e 8-5=3 è divisore di 60; 8 e -5+6=1 è divisore di 60; 6 e -5+3=-2 è divisore di 60. La sequenza [10, 4, 3] è
invece un’istanza negativa del problema, perché 10 è pari ma la somma di 4 e 3 è 7, che non è un
divisore di 60, e 4 è pari ma la somma di 10 e 3 è 13, che non è un divisore di 60.
Ricorda: 0 non è un divisore di nessun numero e la divisione per 0 fa terminare l’esecuzione del
programma.
Consegnare un foglio con nome, cognome e matricola contenente:
• la specifica del problema
• il tipo di problema (accumulazione, conteggio, ver. esistenziale, ver. universale, minimo/massimo).
• un diagramma a blocchi che illustra un algoritmo risolutivo per il problema.
Consegnare su moodle (al link Consegna compito A – Array 1) una funzione C funzioneArray1 con
parametri: 1) un riferimento ad un array di interi; e 2) un intero che rappresenta la lunghezza dell’array.
La funzione restituisce 1 se ogni tripla di interi consecutivi nella sequenza contiene almeno un numero
pari e la somma degli altri due è un divisore di 60, restituisce 0 altrimenti.
*/

/*SPECIFICA
INPUT: arrey con n elementi
pre-condizione: n>=3, con elementi interi
OUTPUT: ver
post-condizione: ver=1 positiva ogni tripla di interi consecutivi nella sequenza ci sia almeno un numero pari e
che la somma degli altri due sia un divisore di 60. altrimenti ver=0 negativa
TIPO DI PROBLEMA : verifica universale
*/

#include <stdio.h>
int array1(int* sca,int n){
	int i=0;
	int ver=1;
	while(i<n-2&&ver){
		int prim=sca[i];
		int sec=sca[i+1];
		int terz=sca[i+2];
//[14, 8, -5, 6, 3]
		if (!( ( (prim%2==0)&&(60%(terz+sec)==0)&&((terz+sec)!=0) )||  
			   ( (sec%2==0)&&(60%(prim+terz)==0)&&((prim+terz)!=0) )||
			   ( (terz%2==0)&&(60%(prim+sec)==0)&&((prim+sec)!=0) )  )
		   )
		{
			ver=0;
		}
		i++;
	}
	return ver;
}
int main(){
	int	n;
	printf("inserisci numero elementi\n");
	scanf("%d",&n);
	if(n<3){
		printf("il minimo di elementi sono 3\n");
	}else{
		int sca[n];
		for (int i = 0; i < n;i++)
		{
			printf("inserisci il %d%c\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		if (array1(sca,n))
		{
			printf("la sequenza sodisfa la proprieta' :)\n");
		}else{
			printf("la sequenza non sodisfa la proprieta' :(\n");
		}
	}
	return 0;
}