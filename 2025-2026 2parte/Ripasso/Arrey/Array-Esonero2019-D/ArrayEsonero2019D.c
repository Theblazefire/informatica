/*
Progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, verificare se 
ogni tripla di interi consecutivi nella sequenza contiene almeno due interi negativi ed almeno due 
interi pari.  Ad esempio, la sequenza [-3, 4, -6, -2] è un’istanza positiva del problema, in quanto la tripla 
[-3, 4, -6] contiene due interi negativi (gli interi -3 e -6) e due interi pari (gli interi 4 e -6) e  
la tripla [4, -6, -3] contiene due interi negativi (gli interi -6 e -2) e tre interi pari (gli interi 4, -6 e -2). La 
sequenza [4, -6, 2, 8] è invece un’istanza negativa del problema, in quanto la tripla [-6, 2, 8] contiene 
un solo intero negativo. 
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C TripleDueNegDuePari in cui sono definiti:  
(6 pt) Una funzione TripleDueNegDuePari con parametri: 1) un riferimento ad un array di interi; e 2) un 
intero che rappresenta la lunghezza dell’array. La funzione restituisce 1 se ogni tripla di interi 
consecutivi nell’array contiene almeno due interi negativi ed almeno due interi pari, restituisce 0 
altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione TripleDueNegDuePari, fornendole come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se ogni tripla di interi consecutivi nella 
sequenza contiene almeno due interi negativi ed almeno due interi pari. 
*/
/*SPECIFICA
 INTPUT: Array n elementi
 pre-condizione: n>=3, elementi interi
 OUTPUT: ver
 post-condizione: ver=1 positivo se 
ogni tripla di interi consecutivi nella sequenza contiene almeno due interi negativi ed almeno due 
interi pari. altrimenti ver =0 negativo
TIPO PROBLEMA:verifica universale 
*/
#include <stdio.h>
int TripleDueNegDuePari(int* sca, int n){
	int ver=1;
	int i=0;
	int pari=0;
	int neg=0;
	while(i<n-2&&ver){
		int prim=sca[i];
		int sec=sca[i+1];
		int terz=sca[i+2];
		
		//pari
		if(prim%2==0) pari++;
		if(sec%2==0) pari++;
		if(terz%2==0)pari++;
		//negativo
		if(prim<0) neg++;
		if(sec<0) neg++;
		if(terz<0) neg++;

		if (pari<2||neg<2)
		{
			ver=0;
		}
		i++;
	}
	return ver;
}
int main(){
	int n;
	printf("inserisci lunghezza della sequensa\n");
	scanf("%d",&n);
	if(n<3){
		printf("accetto minimo 3 elementi\n");
	}else{
		int sca[n];
		for (int i = 0; i <n; i++)
		{
			printf("inserisci il %d%c elemento\n", i+1,167);
			scanf("%d",&sca[i]);
		}

		if (TripleDueNegDuePari(sca,n))
		{
			printf(":)\n");
		}else{
			printf(":(\n");
		}
	}
}