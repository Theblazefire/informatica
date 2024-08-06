/*
--------------------
3) DISTANZA MINIMA
--------------------

Progettare un algoritmo 
per risolvere il seguente 
problema. 
ex
Data una sequenza di interi
con almeno due elementi,
calcolare la distanza 
minima fra due interi 
consecutivi nella 
sequenza. 
La distanza fra due elementi
è pari alla differenza 
fra il maggiore ed il 
minore dei due. D=xi>xi+1 \ xi-(xi+1)
Di<D

 Ad esempio se la sequenza di interi 
 è [3, -3, 4, -2, 5, 7, -3, 8], la soluzione dell’istanza del 
 problema è 2, in quanto il quinto 
 e il sesto intero hanno distanza 2, 
 mentre ogni altra coppia di interi 
 consecutivi nella sequenza ha distanza non minore di 2.

Specifica
dati ingresso (x1..xn)
pre-condizione (x1..xn) app Z 
dati in uscità D distanza app Z
post-condizione la D = min(xi-xi+1)  
di ogni differenza svolta in ogni coppia consecutiva
*/
#include<stdio.h>
int main()
{
	//input
	int min=100,n,x,D;
	printf("trovero' la distanza fra le coppie della lista\n");
	printf("inserisci la lunghezza della lista\n");
	scanf_s("%d",&n);
	int scatola[n];

	for (int i = 0; i < n; ++i)
	{
		printf("inseisci l'elemento %d della sequenza\n", i);
		scanf_s("%d",&scatola[i]);

	}
	//processo iterativo [3, -3, 4, -2, 5, 7, -3, 8]
	int i=0;
	while(i<n)
	{
		//ricava la distanza
		if (scatola[i]>scatola[i+1])
		{
			D=scatola[i]-scatola[i+1];
		}
		else
		{
			D=scatola[i+1]-scatola[i];
		}

		if (min>D)
		{
			min=D;
		}

		i++;//aumenta contatore

	}//fine while
	printf("la distanza e' %d\n", min );
	return 0;
}