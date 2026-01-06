/*
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, 
verificare se ciascuna coppia di interi adiacenti nella sequenza è tale che uno dei due interi della 
coppia divide l’altro (ovvero verificare se, per ogni due elementi adiacenti nella sequenza, il resto 
della divisione del primo per il secondo è zero o il resto della divisione del secondo per il primo è zero). 
Ad esempio l’istanza [-2, 6, 3, 9] è positiva in quanto 6 è divisibile per -2, in quanto 6 è divisibile per 3 
ed in quanto 9 è divisibile per 3; l’istanza [-2, 6, 4, 12] è negativa in quanto 6 non è divisibile per 4 e 4 
non è divisibile per 6.  
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C AdiacentiDivisibili in cui sono definiti:  
(6 pt) Una funzione adiacentiDivisibili con parametri un riferimento ad un array di interi ed un intero 
che rappresenta la lunghezza dell’array. La funzione restituisce 1 se ogni coppia di elementi adiacenti 
nella sequenza è tale che un elemento divide l’altro e restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione adiacentiDivisibili, fornendogli come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se ogni coppia di elementi adiacenti nella 
sequenza è tale che uno divide l’altro 
*/

/*SPECIFICA
 INPUT: arrey formato da n numeri
 pre-condizione: n>=2 
 OUTPUT: 1 o 0
 post-condizione: 1 indica che il primo o secondo numero adiacenti divisi danno 0, altrimenti darà negativa indicandolo con 0
tipo di problema verifica universale
*/

#include <stdio.h>

int adiacentiDivisibili(int* sca,int n){
	int ver=1;
	int i=0;
	while(i < n-1&&ver)
	{
		int primo_num= sca[i];
		int secondo_num= sca[i+1];
		if(( (primo_num%secondo_num)!=0 )&&( (secondo_num%primo_num)!=0 ) ){
			ver=0;
		}
		i++;
	}
	return ver;
}

int main(){
	printf(" inserire lunghezza arrey\n");
	int n;
	scanf("%d",&n);
	int scatola[n];
	for (int i = 0; i < n; i++)
	{
		printf("inserisci elemento %d dell'arrey\n",i+1 );
		scanf("%d",&scatola[i]);
	}
	if(adiacentiDivisibili(scatola,n)){
		printf("ho trovato una coppia che soddisa la proprita' :)\n");
	}else{
		printf("ho trovato una coppia che non soddisa la proprita' :(\n");
	}

	return 0;
}