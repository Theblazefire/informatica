#include <stdio.h>
/*
Specifica
dati in ingreso (x1...xn)
pre-condizione (x1...xn) app Z minimo 4 valori
dati in uscita variabile booleana
post-condizione se q(variabile booleana) è vera esiste
un elemento intermedio uguale alla loro somma o differenza
se è falsa non esiste.
Tipo di problema esistenza  
*/
//funzione principale
int differenzaAdiacenti(int scat[],int n)
{
	int q=0;//variabile booleana
	int i=0;//variabile contatore
	//leggi la sequenza
	while(i<n-2&&!q)
	{
		//verifica la prorpietà 2 3 1
		if ((scat[i]-scat[i+2]==scat[i+1])||(scat[i+2]-scat[i]==scat[i+1]))
		{
			//cambia la variabile buleana 
			//se la proprietà è vera
			q=1;
		}
		i++;//incrementa il contatore
	}
	return q;//restituisci variabile booleana
}

int main()
{
	//input
	printf("posso rivelare un numero nella sequenza\n");
	printf("il numero revelato rapresenta il rusultato\n");
	printf("della differenza fra due numeri\n");
	printf("insersci lunghezza della sequenza\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	//prendi elementi della sequenza
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci il numero %d della sequenza\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}
	int q=differenzaAdiacenti(scatola,n);
	if (q)
	{
		printf("esiste un numeeo che conferma la proprieta'\n");
	}
	else
	{
	printf("non esiste un numeeo che conferma la proprieta'\n");	
	}
	return 0;
}