/*
============================================================== 
ESERCIZIO 4: ISTRUZIONI RIPETITIVE
==============================================================

Scrivi un programma che ripetutamente 
chiede all'utente di inserire un numero 
intero. La prima volta che l'utente 
introduce un intero non positivo, 
il programma termina stampando la media 
(come valore reale) dei numeri precedentemente introdotti.

Specifica
input (x1...xn)
pre-condizione n è un numero intero > 0
output n app Z
post-condizione n = media(x1...xn) app R

*/
#include <stdio.h>
int main()
{
	//input
	int x;
	int con=0;//variabile contatore media
	int som=0;//variabile somma
	printf("faccio la media inserisci la sequenza.\nUna volta finita la sequnza metti un numero negativo\n");
	do
	{
		printf("inserisci un numero\n");
		scanf_s("%d",&x);
		if (x>0)
		{
		som+=x;
		con++;
		}
		
	}while(x>0);
	if (con>0)
	{
		float Media= (float) som/con;
		printf("la Media = %f \n", Media);
	}
	else
	{
		printf("hai inserito come primo numero un valore negativo non svolgo la media\n");
	}

	return 0;
}