/*
(ConvertiArrayNumero) 
Scrivere un programma 
che prende in input un 
array non nullo e non 
vuoto di interi e che 
restituisce in output 
a un intero composto 
dalle cifre dell’array: 
la cifra più significativa 
corrisponde all'indice 
0 dell'array. Utilizzare 
una funzione ricorsiva. 

Esempio: {1,2,3} -> 123
*/
#include <stdio.h>
int ConvertiArrayNumero(int sca[],int n)
{
	int k=0;
	if (n==0)
	{//caso base
		k=0;
	}
	else
	{//passo indutivo/ricorsivo 1,2
		k=ConvertiArrayNumero(sca,n-1)*10+sca[n-1];
	}
	return k;
}
/*Funz Principale*/
int main()
{
	int scatola[3]={5,2,3};
	int k=ConvertiArrayNumero(scatola,3);
	printf("%d", k);

}