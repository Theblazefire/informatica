/*
Data una sequenza di interi, 
verificare se tutte le terne 
di elementi adiacenti nella 
sequenza sono tali che uno 
dei tre elementi è 
pari alla somma degli altri due
Specifica
input (x1...xn)
pre-condizione (x1...xn) app Z
output q variabile booleana
post-condizione q variabile booleana è
vera se le terne 
di elementi adiacenti nella 
sequenza sono tali che uno 
dei tre elementi è 
pari alla somma degli altri due. se è falso
non abbiamo somme degli elementi della terna 
uguali hai elementi nella terna.
0
problema di tipo universale  
*/
#include <stdio.h>
int sommaTriple(int scat[],int n)
{
	int q=1;
	int i=0;
	while(i<n-2&&q)
	{
		if (// 1 0 5 6 8 5
			!( 
			  (scat[i]+scat[i+1]==scat[i+2]) || 
			  (scat[i+1]+scat[i+2]==scat[i]) ||
			  (scat[i]+scat[i+2]==scat[i+1])
			 )
		   )
		{
			q=0;
		}
		i++;

	}//while
  return q;
}
//funz principale
int main()
{
	/*input*/
	printf("sommo gli elementi di una tripla per trovare nella pripla un elemento che sia il risultato di una somma\n");
	printf("lunghezza sequenza\n");
	int n;
	scanf("%d",&n);
	int scatola[n];//arrey monodimensionale
	/*prendi gli elementi della sequenza*/
	for (int i = 0; i < n; ++i)
	{
		printf("elemento %d della sequenza\n",i+1 );
		scanf("%d",&scatola[i]);
	}
	/*verifica la prop*/
	int q=sommaTriple(scatola,n);
	/*stampa*/
	if (q)
	{
		printf("tutta la sequenza sodisfa la prop\n");
	}
	else
	{
		printf("non in tutta la sequenza sodisfa la prop\n");
	}

}
