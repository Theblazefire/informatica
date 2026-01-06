/*
Descrizione del problema 
Progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, verificare se 
ogni tripla di interi consecutivi nella sequenza contiene due interi la cui somma è 10.  

Ad esempio, la sequenza [7, 3, 12, -2, 5, 12] è un’istanza positiva del problema, in quanto gli interi 7 e 3 della tripla [7, 
3, 12] hanno somma 10, gli interi 12 e -2 della tripla [3, 12, -2] hanno somma 10, gli interi 12 e -2 della 
tripla [12, -2, 5] hanno somma 10, e gli interi -2 e 12 della tripla [-2, 5, 12] hanno somma 10. 

Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C TripleSomma10 in cui sono definiti:  
(6 pt) Una funzione tripleSomma10 con parametri: 1) un riferimento ad un array di interi; e 2) un intero 
che rappresenta la lunghezza dell’array. La funzione restituisce 1 se ogni tripla di interi consecutivi nella 
sequenza contiene due interi la cui somma è 10, restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione tripleSomma10, fornendole come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se ogni tripla di interi consecutivi nella 
sequenza contiene due interi la cui somma è 10 oppure no.
*/


/*SPECIFICA
INPUT: arrey con n elementi
pre-condizione= n>=3 elementi interi
OUTPUT: 1(vero) o 0(falso)
post-condizione: tripla di interi consecutivi nella sequenza contiene due interi la cui somma è 10 restituirà 1 altrimenti 0
tipo di problema: verifica universale
*/
#include <stdio.h>

int tripleSomma10(int* sca,int n){
	int i=0;
	int ver=1;
	while(i<n-2&&ver){
		int primo_numero=sca[i];
		int secondo_numero=sca[i+1];
		int terzo_numero=sca[i+2];

		if( (10!=(primo_numero+secondo_numero))&&
			(10!=(terzo_numero+secondo_numero))&&
			(10!=(primo_numero+terzo_numero))
		  ){//[2 2 2]
			ver=0;
		}
		i++;
	}
	return ver;
}
int main(){
	printf("inserisci lunghezza della sequenza di elementi\n");
	int n;
	scanf("%d",&n);
	if (n<=2)
	{
		printf("posso accetare un numero minimo di 3 elementi\n");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("%d%celemento della sequenza\n",i+1,167);
			scanf("%d",&sca[i]);
		}

		if(tripleSomma10(sca,n))
		{
			printf("la sequenza inserita sodisfa la proprieta' :)\n");
		}else{
			printf("la sequenza inserita non sodisfa la proprieta' :(\n");
		}
	}
	return 0;
}