/*
Esercizio 11 (DistanzaMinima) Scrivere un programma 
che prende in input una sequenza di interi e determina 
la minima distanza fra due interi consecutivi della 
sequenza utilizzando una funzione ricorsiva. 

La distanza fra due interi è data dal massimo meno il minimo fra i due.
*/

#include <stdio.h>
int distanz(int a,int b){
	if(a<b)return b-a;
	return a-b;
}
int DistanzaMinimaRic(int* sca,int n,int i,int dist){
	int distMin=dist;
	if (i>=n-1)
	{
		return distMin;
	}else{
		if (distMin>distanz(sca[i],sca[i+1]))
		{
			distMin=distanz(sca[i],sca[i+1]);
		}
		return DistanzaMinimaRic(sca,n,i+1,dist);
	}
}
int DistanzaMinima(int* sca,int n){
	if (n<2)
	{
		return 0;
	}
	int dist=distanz(sca[0],sca[1]);
	return DistanzaMinimaRic(sca,n,0,dist);
}