/*
Descrizione del problema
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di
interi, verificare se ogni tripla di interi consecutivi nella sequenza contiene almeno un intero
pari ed uno dispari. Ad esempio, la sequenza [7, 3, -12, 0, 5] è un’istanza positiva del
problema, in quanto le triple [7, 3, -12], [3, -12, 0] e [-12, 0, 5] contengono ciascuna almeno un
intero pari ed uno dispari. Viceversa, la sequenza [3, 6, -12, 0, 5] è un’istanza negativa del
problema, in quanto la tripla [6, -12, 0] non contiene interi dispari.
Task
• Descrivere in modo sintetico la specifica del problema.
• Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica
esistenziale, verifica universale, minimo/massimo).
• Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi.
• Realizzare una funzione C triplePariDispari con parametri: 1) un riferimento ad un array
di interi; e 2) un intero che rappresenta la lunghezza dell’array. La funzione restituisce 1
se ogni tripla di interi consecutivi nella sequenza contiene almeno un intero pari ed uno
dispari, restituisce 0 altrimenti.
*/

/*SPECIFICA
INTPUT: arrey con n elementi
pre-condizione: n>=3 , elementi interi
OUTPUT: ver
post-condizione: ver= 1 che soddisfa che ogni tripla di interi 
consecutivi nella sequenza contiene almeno un intero, 
pari ed uno dispari. altrimenti ver=0.
tipo problema universale
*/

#include <stdio.h>

int triplePariDispari(int* sca,int n){
	int i=0;
	int ver=1;//12
	while(i<n-2&&ver){
		int prim_num=sca[i];
		int sec_num=sca[i+1];
		int terz_num=sca[i+2];
		int pari=0;
		int dispari=0;
		
		/*verifica pari*/
		if(prim_num%2==0){
			pari++;
		}
		if(sec_num%2==0){
			pari++;
		}
		if(terz_num%2==0){
			pari++;
		}

		/*verifica dispari*/
		if(prim_num%2!=0){
			dispari++;
		}
		if(sec_num%2!=0){
			dispari++;
		}
		if(terz_num%2!=0){
			dispari++;
		}

		/*verifica un pari e un dispari*/
		if((pari!=1)&&(dispari!=1)){
			ver=0;
		}
		/*Soluzione prof
		if(((prim_num%2==0)||(sec_num%2==0)||(terz_num%2==0))&&
			((prim_num%2!=0)||(sec_num%2!=0)||(terz_num%2!=0))){
			i++;
		}else{
			ver=0;
		}*/
		i++;
	}
	return ver;
}

//DA COMPILARE
int main(){
	printf("ciao sono un programma che verifico se in una tripla\n sia un numero intero pari e uno disparo\n");
	printf("inserisci quantita' dei elementi\n");
	int n;
	scanf("%d",&n);
	if(n<3){
		printf("posso accetare una quantita almeno di 3 elementi");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento\n",i+1,167 );
			scanf("%d",&scanf[i]);
		}
		if(triplePariDispari(sca,n)){
			printf("gli elementi inseriti hanno un pari e un dispari :)\n");
		}else{
			printf("gli elementi inseriti non hanno un pari e un dispari :(\n");
		}

	}
	return 0;
}