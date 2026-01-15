/*
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di almeno due
interi, determinare la massima somma dei valori assoluti di due interi, non necessariamente vicini nella
sequenza. Ad esempio, per la sequenza [4, 9, 2, -5, 3] la soluzione è 14, pari alla somma dei valori
assoluti di 9 e -5.
Consegnare su moodle (al link Consegna compito A – Array 2) una funzione C funzioneArray2 con
parametri: 1) un riferimento ad un array di interi; e 2) un intero che rappresenta la lunghezza dell’array.
La funzione restituisce la massima somma dei valori assoluti di due interi della sequenza.
*/

int funzioneArray2(int* sca,int n){
int max=0;
	for(int i=0;i<n-1;i++){
		for (int j = i+1; j < n; j++){
		int mod1=(sca[i]<0)? -(sca[i]):sca[i];
		int mod2=(sca[j]<0)? -(sca[j]):sca[j];
		int somm= mod1+mod2;
			if(max<somm){
				max=somm;
			}
		}
	}
	return max;
}

#include <stdio.h>

int main(){
	int	n;
	printf("inserisci numero elementi\n");
	scanf("%d",&n);
	if(n<2){
		printf("il minimo di elementi sono 2\n");
	}else{
		int sca[n];
		for (int i = 0; i < n;i++)
		{
			printf("inserisci il %d%c\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		int num=funzioneArray2(sca,n);
			printf("il max=%d\n",num);
	}
	return 0;
}