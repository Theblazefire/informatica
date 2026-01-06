/*
Descrizione del problema 
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, 
verificare se tutte le terne di elementi adiacenti nella sequenza sono tali che uno dei tre elementi è 
pari alla somma degli altri due. 
Ad esempio l’istanza [4, 3, 1, -2, -1] è positiva in quanto 4=3+1, in quanto 1=3+(-2) ed in quanto             
-1=1+(-2). L’istanza [0,2,5] è negativa in quanto 0 è diverso da 2+5, in quanto 2 è diverso da 0+5 ed in 
quanto 5 è diverso da 0+2.  
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C SommaTriple in cui sono definiti:  
(6 pt) Una funzione sommaTriple con parametri un riferimento ad un array di interi ed un intero che 
rappresenta la lunghezza dell’array. La funzione restituisce 1 se tutte le terne di elementi adiacenti 
nella sequenza sono tali che uno dei tre elementi è pari alla somma degli altri due. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione sommaTriple, fornendogli come parametro un riferimento alla sequenza 
di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se tutte le terne di elementi adiacenti nella 
sequenza sono tali che uno dei tre elementi è pari alla somma degli altri due
*/

/*SPECIFICA
INPUT: arrey di n interi
pre-condizione: n>=3
OUTPUT: 1 (vero) o 0 (falso)
post-condizione= la condizione è soddisfatta quando uno dei tre elementi è 
pari alla somma degli altri due. 
*/

#include <stdio.h>

int sommaTriple(int* sca,int n){
	int i=0;
	int ver=1;
	while(i<n-2&&ver){
		
		int primo_num=sca[i];
		int secondo_num=sca[i+1];
		int terzo_num=sca[i+2];
		//		verfico se la somma non è uguale al numero esculso da essa 
		//		     ↓  						 ↓ verifico se tutte le combinazioni
		if((primo_num!=(secondo_num	+ terzo_num))&&
		   (secondo_num!=(primo_num	+ terzo_num	))&&
		   (terzo_num!=(primo_num+secondo_num))
		  ){
			ver=0;
		}
		i++;
	}
	return ver;
}

int main(){
	printf("inserisci lunghezza per inserire elementi\n");
	int n;
	scanf("%d",&n);
	if(n<3)
	{
		printf("il minimo sono 3 elementi\n");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento\n",i+1,127 );
			scanf("%d",&sca[i]);
		}

		if(sommaTriple(sca,n)){
			printf("gli elementi inseriti hanno verificato la proprieta' :)\n");
		}else{
			printf("gli elementi inseriti non hanno verificato la proprieta' :(\n");
		}
	}
	return 0;
}