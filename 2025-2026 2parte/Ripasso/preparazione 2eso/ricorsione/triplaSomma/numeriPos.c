/*
Esercizio 7 (NumeroPositivi) 
Scrivere un programma che prende in input 
una sequenza di interi e calcola e restituisce 
il numero di valori positivi nella sequenza. 

Definire una funzione ricorsiva per il calcolo del numero 
di elementi positivi in una sequenza.
*/
void NumeroPositiviRic(int sca,int n,int i,int* cont){
	if (i<=n) return;
	cont = cont + (sca[i]>0);
	NumeroPositiviRic(sca,n,i+1,cont);
}

int NumeroPositivi(int sca,int n){
	int count=0;

	NumeroPositiviRic(sca,n,0,&count);
	return count;
}