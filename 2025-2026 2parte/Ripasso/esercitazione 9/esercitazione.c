/*
Realizzare un'applicazione EsattamenteDueSuTre definita come segue.

L’applicazione contiene una funzione ricorsiva esattamenteDue che verifica se, all’interno di un array
di interi ricevuto come parametro, ogni tripla di elementi adiacenti è tale che esattamente due dei tre
elementi sono positivi. Ad esempio, la verifica è positiva per l’array [-1, 4, 2, -5, 3], mentre è negativa
per l’array [1, 1, 1] e per l’array [-1, 1, -1]. La funzione esattamenteDue ha due parametri: l’array e la
sua lunghezza. Nel caso in cui si desideri utilizzare un terzo parametro per realizzare la ricorsione, deve
essere definita un’ulteriore funzione esattamenteDueRic che ha tre parametri e che realizza la
ricorsione. In tal caso la funzione esattamenteDue invoca la funzione esattamenteDueRic (fornendole
opportuni parametri) per calcolare il risultato della verifica.

L’applicazione contiene una funzione main che deve 1) chiedere all’utente quanti interi ha la
sequenza e leggere la risposta dell’utente 2) chiedere all’utente di introdurre gli interi della sequenza,
leggere gli interi introdotti dall’utente e memorizzarli in un array 3) Invocare la funzione
esattamenteDue, fornendole come parametro un riferimento alla sequenza di interi appena letta e la
sua lunghezza 4) Stampare un messaggio che comunica all’utente se ogni tripla di interi consecutivi
nella sequenza contiene esattamente due interi positivi oppure no.
*/

#include <stdio.h>

int pos(int a,int b,int c){
	if ( ((a>0)&&(b>0)&&(c<0))||
		 ((c>0)&&(b>0)&&(a<0))||
		 ((a>0)&&(c>0)&&(b<0))
	   )
	{
		return	1;
	}else{
		return 0;
	}	
}
int	esattamenteDueRic(int* arr,int n,int i){

	if (i+2>=n)
	{//[][][] null
		return	1;
	}else{
		return	pos(arr[i],arr[i+1],arr[i+2])&&esattamenteDueRic(arr,n,i+1);	
	}
}
int	esattamenteDue(int* arr,int n){
	if (n<2)
	{
		printf("accetto solo triple\n");
		return	0;
	}else{
		return	esattamenteDueRic(arr,n,0);
	}
}
int main(){
	int n=0;
	printf("lunghezza sequenza\n");
	scanf_s("%d%*c",&n);
	
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("inseerisci elemento %d\n",i+1);
		scanf_s("%d",&arr[i]);
	}


	if (esattamenteDue(arr,n))
	{
		printf(":)\n");
	}else{
		printf(":(\n");
	}
	return	0;
}