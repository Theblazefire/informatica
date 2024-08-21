/*
funzione arrey base
attenzione non è 
possibile che la funzione
dia la sequenza dell'arrey nel c 
*/
#include <stdio.h>
int SomScatola(int scatola[],int n)//parametri formali
{
	int SommAll=0;
	//somma elementi della sequanza
	for(int i = 0; i < n; ++i)
	{
		SommAll+=scatola[i];
	}
	return	SommAll;//restituisci la somma

}//end SomScatola
int main()//funz principale
{
	printf("stampo la somma della sequenza	\n");
	printf("lunghezza della sequenza\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];//arrey lunga n
	for (int i = 0; i < n; ++i)
	{
		printf("numero %d della sequenza\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}//trasferisci l'arrey nella funz SomScatola
	int somma=SomScatola(scatola,n);
    printf("la somma delle sequenza	= %d\n",somma );
}//end main