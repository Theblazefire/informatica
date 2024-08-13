/*
============================================================== 
ESERCIZIO 1: ISTRUZIONI CONDIZIONALI
==============================================================

Scrivi un programma che 
chiede all'utente di 
inserire tre numeri interi, 
li legge e stampa un messaggio 
che indica all'utente il valore 
massimo ed il valore minimo fra quelli letti.

specifica
input (x1..x3)
pre-condizione (x1..x3) app Z
output n1 n2 app Z
post-condizione n1=min(x1,x2,x3),n2=Max(x1,x2,x3)

*/

#include <stdio.h>
int main()
{
	//input
	int n=3,scatola[n];
	printf("inserisci 3 numeri verifichero' quale sia il massimo e il minimo\n");
	for (int i = 0; i < n; ++i)
	{
	  	printf("inserisci il %d della sequenza\n", i);
	  	scanf_s("%d",&scatola[i]);
	}
	
	int max=scatola[0];//dichiarazione del max
    int min=scatola[0];//dichiarazione del min
    //trova il massimo e il minimo
	int i=1;
	while(i<n)
	{
		//verifica max
		if (scatola[i]>max)
		{
			max=scatola[i];
		}
		//verifica minimo
		if (scatola[i]<min)
		{
				min=scatola[i];
		}
		
		i++;
	}//fine while

	printf("il max = %d , min=%d\n",max,min );




	return 0;
}
