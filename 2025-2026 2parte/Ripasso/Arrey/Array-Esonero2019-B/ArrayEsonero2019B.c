/*
Descrizione del problema 
Progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, verificare se 
esiste una tripla di interi consecutivi nella sequenza che contiene almeno due interi positivi ed almeno 
due interi dispari.  
Ad esempio, la sequenza [-2, 4, 3, -1] è un’istanza positiva del problema, in quanto 
la tripla [4, 3, -1] contiene due interi positivi (gli interi 4 e 3) e due interi dispari (gli interi 3 e -1). La 
sequenza [-2, 5, -2, 4] è invece un’istanza negativa del problema, in quanto la tripla [-2, 5, -2] non 
contiene due interi positivi e la tripla [5, -2, 4] non contiene due interi dispari. 
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C TripleDuePosDueDis in cui sono definiti:  
(6 pt) Una funzione tripleDuePosDueDis con parametri: 1) un riferimento ad un array di interi; e 2) un 
intero che rappresenta la lunghezza dell’array. La funzione restituisce 1 se esiste una tripla di interi 
consecutivi nell’array che contiene almeno due interi positivi ed almeno due interi dispari, restituisce 0 
altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione tripleDuePosDueDis, fornendole come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se esiste una tripla di interi cons
*/

/*SPECIFICA
INPUT= array con n elementi
pre-condizione: n>=3, elementi interi
OUTPUT: 1(VERO)	o 0(falso)
post-condizione: 1 se esiste una tripla di interi consecutivi 
nella sequenza che contiene almeno due interi positivi ed almeno 
due interi dispari. altrimenti 0
tipo problema: verifica esistenziale
*/
#include <stdio.h> 
int tripleDuePosDueDis(int* sca,int n){
	int i=0;
	int ver=0;
	while(i<n-2&&(!ver)){
		int prim_num=sca[i];
		int second_num=sca[i+1];
		int terz_num=sca[i+2];
		if( ( ( (prim_num%2)!=0 ) && ( (second_num%2)!=0) )||
			( ( (prim_num%2)!=0 ) && ( (terz_num%2)!=0) )||
			( ( (terz_num%2)!=0 ) && ( (second_num%2)!=0) )
			){
			ver=1;
		}

		i++;
	}
	return ver;
}
int main(){
	printf("inserisci lunghezza della sequenza\n");
	int n;
	scanf("%d",&n);
	if(n<3){
		printf("accetto minimo 3 elementi");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento della sequenza\n",i+1,167 );
			scanf("%d",&sca[i]);
		}

		if (tripleDuePosDueDis(sca,n))
		{
			printf("la sequenza soddisfa la condizione :)\n");
		}else{
			printf("la sequenza non soddisfa la condizione :(\n");
		}
	}
}