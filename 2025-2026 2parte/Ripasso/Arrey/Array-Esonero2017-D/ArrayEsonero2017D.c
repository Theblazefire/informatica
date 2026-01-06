/*
Descrizione del problema 
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, 
verificare se esistono tre elementi adiacenti nella sequenza tali che la somma o il prodotto fra i valori 
dei primi due elementi è pari al valore del terzo elemento. 
Ad esempio l’istanza [0, 5, 3, 8, -2, -1] è positiva in quanto 5+3=8; l’istanza [0, 5, 3, 2, 6] è positiva in 
quanto 3*2=6; l’istanza [2, 6, 10] è negativa in quanto 2+6 e 2*6 sono entrambi diversi da 10. 
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C SommaProdotto in cui sono definiti:  
(6 pt) Una funzione sommaProdotto con parametri un riferimento ad un array di interi ed un intero che 
rappresenta la lunghezza dell’array. La funzione restituisce 1 se esistono tre elementi adiacenti nella 
sequenza tali che la somma o il prodotto dei valori dei primi due elementi è pari al valore del terzo 
elemento; la funzione restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione sommaProdotto, fornendogli come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se esistono tre elementi adiacenti nella 
sequenza tali che la somma o il prodotto dei valori dei primi due elementi è pari al valore del 
terzo elemento 
*/

/*SPECIFICA
INPUT: arrey con n numeri
pre-condizione: n>=3
OUTPUT: 1 (vero) o 0 (falso)
post-condizone: è vero (1) la somma o il prodotto fra i valori 
dei primi due elementi è pari al valore del terzo elemento, altrimenti falso (0)
*/

#include <stdio.h>
int sommaProdotto(int* sca,int n){
	int i=0;
	int ver=0;
	while(i<n-2&&(!ver)){
		int primo_num=sca[i];
		int secondo_num=sca[i+1];
		int terza_num=sca[i+2];

		if( ( terza_num==(primo_num+secondo_num) ) || ( terza_num==(primo_num*secondo_num) )  ){
			ver=1;
		}
		i++;
	}
	return ver;
}
int main(){
	printf("inserisci quanti elementi inserirai\n");
	int n;
	scanf("%d",&n);
	if(n<3){
		printf("il minimo di elementi sono 3\n");
	}else{
		int sca[n];
		for (int i = 0; i < n;i++)
		{
			printf("inserire %d%c elemento\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		if(sommaProdotto(sca,n)){
			printf("Ho verificato gli elementi soddisfano la prorita' :)\n");
		}else{
			printf("Ho verificato gli elementi non soddisfano la prorita' :(\n");	
		}
	}
	return 0;
}