/*
Descrizione del problema 
Progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, verificare se 
ogni tripla di interi consecutivi nella sequenza contiene esattamente due interi pari.  Ad esempio, la 
sequenza [7, 4, 6, -3] è un’istanza positiva del problema, in quanto sia nella tripla [7, 4, 6] che nella 
tripla [4, 6, -3] esattamente due interi sono pari (gli interi 4 e 6, in entrambi i casi).  
La sequenza [4, 6, -3, 1] è invece un’istanza negativa del problema, in quanto nella tripla [6, -3, 1] un 
solo intero è pari; anche la sequenza [2, 4, 6, 8] è un’istanza negativa del problema, in quanto nella 
tripla [2, 4, 6] tutti e tre gli interi sono pari. 
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C TripleDuePari in cui sono definiti:  
(6 pt) Una funzione tripleDuePari con parametri: 1) un riferimento ad un array di interi; e 2) un intero 
che rappresenta la lunghezza dell’array. La funzione restituisce 1 se ogni tripla di interi consecutivi 
nell’array contiene esattamente due interi pari, restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione tripleDuePari, fornendole come parametro un riferimento alla sequenza 
di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se ogni tripla di interi consecutivi nella 
sequenza contiene esattamente due interi pari.
*/

/*
INPUT: array con n elementi
pre-condizione: n>=3, con elementi interi
OUTPUT: ver
post-condizione: ver=1 è vera se ogni tripla di interi consecutivi 
nella sequenza contiene esattamente due interi pari. altrimenti ver=0 falso
TIPO PROBLEMA: esistenza universale
*/
#include <stdio.h>

int tripleDuePari(int* sca,int n){
	int ver=1;
	int i=0;
	int count=0;
	while(i<n-2&&ver){
		
		int prim=sca[i];
		int sec=sca[i+1];
		int terz=sca[i+2];
		
		if (prim%2==0)
		{
			count++;
		}

		if (sec%2==0)
		{
			count++;
		}

		if (terz%2==0)
		{
			count++;
		}

		if (count!=2)
		{
			ver=0;
		}
		i++;
	}
	return ver; 
}

int main(){
	int n;	
	printf("inserisci numero della sequenza\n");
	scanf("%d",&n);
	if(n<3){
		printf("accetto sequenze di almeno 3 elementi\n");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		if(tripleDuePari(sca,n)){
			printf("la condizione viene verificata :)\n");
		}else{
			printf("la condizione non viene verificata :(\n");
		}
	}
	
	return 0;
}