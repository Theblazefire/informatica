/*
============================================================== 
ESERCIZIO 3: ISTRUZIONI RIPETITIVE
==============================================================

Scrivi un programma che
chiede all'utente di 
inserire due interi x 
ed y e stampa tutti gli 
interi positivi che 
sono compresi fra 
x ed y (estremi inclusi) 
e che non sono divisibili 
per 3.

specifica
dati in entrata x e y
pre-condizione x,y sono numeri interi
dati in usicta stampa di (x...y)
post-condizione (x...y) è composto da numeri interi non divisibili per 3
*/
#include <stdio.h>
int main()
{
	int x,y;
	printf("creo un insime il quale non contiene i divisori di 3\n");
	printf("inserisci il minimo\n");
	scanf_s("%d",&x);
	printf("inserisci il massimo\n");
	scanf_s("%d",&y);
	int i=x;
	while(i<=y)
	{
      if(!(i%3==0))
      {
      	printf("%d ", i);
      }
      i++;
      


	}//chiusura while

	
	return 0;
}