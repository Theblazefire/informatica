/*
Data una sequenza di interi, 
verificare se esiste una 
tripla di interi consecutivi 
nella sequenza che contiene
esattamente due interi dispari. 

Ad esempio, la sequenza 
[-2, 4, 3, -1] è un’istanza 
positiva del problema, 
in quanto la tripla [4, 3, -1]
contiene esattamente due 
interi dispari 
(gli interi 3 e -1). 
La sequenza [-2, 5, -2, 4, 2] è invece 
un’istanza negativa del problema, 
in quanto ogni tripla di interi 
consecutivi contiene al più un intero 
dispari; anche la sequenza 
[1, 3, 5, 7] è un’istanza 
negativa del problema, in quanto 
ogni tripla di interi 
consecutivi contiene tre interi dispari

Specifica
input (x1...xn)
pre-condizione (x1...xn) app Z
output q variabile booleana
post-condizione q vale vero se eistone
2 numeri dispari altrimenti vale falso
Problema tipo conteggio

*/
#include <stdio.h>
int tripleDueDis(int sca[],int n)
{
	int i=0;
	int con=0;
	while(i<=n-2)
	{
		if (
			(sca[i]%2!=0)&&(sca[i+1]%2!=0)||
			(sca[i]%2!=0)&&(sca[i+2]%2!=0)||
			(sca[i+1]%2!=0)&&(sca[i+2]%2!=0)
			)
		{
			con=con+1;
		}
		i++;

	}
	if (con==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()//funz principale
{
	/*input*/
	printf("verifico se esistono solo 2 elementi dispari\n");
	printf("in una tripla di una sequenza\n");
	printf("dammi lunghezza della sequenza\n");
	//prendi lunghezza
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	for (int i = 0; i < n; ++i)
	{
		printf("insersci %d elemento della sequenza\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}
	/*stampa*/
	if (tripleDueDis(scatola,n))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}