/*
Descrizione del problema 
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di interi, 
verificare se esistono tre elementi adiacenti nella sequenza tali che il valore dell’elemento intermedio 
è uguale alla differenza fra il valore dell’elemento precedente ed il valore dell’elemento successivo, 
oppure alla differenza fra il valore dell’elemento successivo ed il valore dell’elemento precedente.  
Ad esempio l’istanza [-2, 7, 2, 5] è positiva, in quanto 2 = 7-5; l’istanza [1, 5, -2, 3] è positiva, in quanto   -2 = 3-5; l’istanza [1,2,4] è negativa, in quanto 2 è diverso sia da 1-4 che da 4-1.  
Task 
(1 pt) Descrivere in modo sintetico la specifica del problema. 
(1 pt) Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica esistenziale, 
verifica universale, ricerca, minimo/massimo). 
(3.5 pt) Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi. 
Scrivere un programma C DifferenzaAdiacenti in cui sono definiti:  
(6 pt) Una funzione differenzaAdiacenti con parametri un riferimento ad un array di interi ed un intero 
che rappresenta la lunghezza dell’array. La funzione restituisce 1 se esistono tre elementi adiacenti 
nella sequenza tali che il valore dell’elemento intermedio è pari alla differenza fra il valore 
dell’elemento precedente ed il valore dell’elemento successivo o alla differenza fra il valore 
dell’elemento successivo ed il valore dell’elemento precedente; la funzione restituisce 0 altrimenti. 
(2.5 pt) Una funzione main che gestisce l’interazione con l’utente. La funzione main deve:  
• chiedere all’utente quanti interi ha la sequenza e leggere la risposta dell’utente 
• chiedere all’utente di introdurre gli interi della sequenza, leggere gli interi introdotti dall’utente 
e memorizzarli in un array 
• invocare la funzione differenzaAdiacenti, fornendogli come parametro un riferimento alla 
sequenza di interi appena letta e la sua lunghezza 
• stampare un messaggio che comunica all’utente se la sequenza contiene tre elementi 
adiacenti tali che il valore dell’elemento intermedio è pari alla differenza fra i valori degli 
elementi adiacenti 
*/

/*SPECIFICA	
INPUT=n valori
pre-condizione= n>=0
OUTPUT= 1 o 0;
post-condizione= 1 che esiste una tripla dove una sottrazione fra il primo e il terzo o viceversa. numero sono uguali al secondo;

TIPO DI PROBLEMA= esistenza
*/
#include <stdio.h>
int differenzaAdiacenti(int* sca,int n,int ver){
					//    ↓ condizzione per triple
	for (int i = 0; i < n-2; i++)
	{
		int num_sin=sca[i];
		int num_cen=sca[i+1];
		int num_des=sca[i+2];

		if((num_cen==num_sin-num_des)||(num_cen==num_des-num_sin)) return 1;	
	}
	return ver;
}
int main(){
	/*input*/
	int n;
	printf("inserisci lunghezza arrey\n");
	scanf("%d",&n);
	int scatola[n];

	for (int i = 0; i < n; i++)
	{
		printf("inserisci elemento %d dell'arrey \n", i+1);
		scanf("%d",&scatola[i]);
	}

	/*OUTPUT*/
	if(differenzaAdiacenti(scatola,n,0)){
		printf("proprieta' sodisfatta\n");
	}else{
		printf("proprieta' non sodisfatta\n");
	}
	return 0;
}