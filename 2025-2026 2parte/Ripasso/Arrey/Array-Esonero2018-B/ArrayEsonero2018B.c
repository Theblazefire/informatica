/*
Progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, verificare se 
esiste una tripla di interi consecutivi nella sequenza che contiene due interi il cui prodotto è 12.  Ad 
esempio, la sequenza [5, 3, -12, -4, -1] è un’istanza positiva del problema, in quanto gli interi -12 e -1 
della tripla [-12, -4, -1] hanno prodotto 12; la sequenza [5, 3, 12] è un’istanza negativa del problema, in 
quanto non ci sono due interi nella tripla [5, 3, 12] il cui prodotto è 12. 
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C TriplaProdotto12 in cui sono definiti:  
(6 pt) Una funzione triplaProdotto12 con parametri: 1) un riferimento ad un array di interi; e 2) un intero 
che rappresenta la lunghezza dell’array. La funzione restituisce 1 se esiste una tripla di interi consecutivi 
nella sequenza che contiene due interi il cui prodotto è 12, restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione triplaProdotto12, fornendole come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se esiste una tripla di interi consecutivi nella 
sequenza che contiene due interi il cui prodotto è 12 oppure no.
*/

/*specifica
INPUT: Array con n elementi
pre-condizione: n>=3 elementi interi
OUTPUT: 1(vero)o 0(falso)
post-condizione: esiste una tripla di interi consecutivi 
nella sequenza che contiene due interi il cui prodotto è 12. darà 1 altrimenti 0
tipologia problema: verifica esistenziale
*/
#include <stdio.h>
int triplaProdotto12(int* sca,int n){
	int i=0;///1 2 2 3
	int var=0;
	while(i<n-2&&(!var)){
		int prim_num=sca[i];
		int second_num=sca[i+1];
		int terz_num=sca[i+2];
		if (((prim_num*second_num)==12)||
			((prim_num*terz_num)==12)||
			((terz_num*second_num)==12)
			)
		{
			var=1;
		}
		i++;
	}
	return var;
}

int main(){
	printf("inserisci lunghezza del sequenza\n");
	int n;
	scanf("%d",&n);
	if(n<3){
		printf("acceto minimo 3 elementi\n");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento della sequenza\n", i+1,167);
			scanf("%d",&sca[i]);
		}
		if (triplaProdotto12(sca,n))
		{
			printf("ho verficato e la sequenza sodisfa la candizione :)\n");
		}else{
			printf("ho verficato e la sequenza non sodisfa la candizione :(\n");
		}
	}
	return 0;
}
