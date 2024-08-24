/*
Si vuole progettare un algoritmo 
per risolvere il seguente problema. 

Data una sequenza di interi, 
verificare se ciascuna coppia 
di interi adiacenti nella sequenza 
è tale che uno dei due interi 
della coppia divide l’altro 

(ovvero verificare se, per ogni 
due elementi adiacenti nella 
sequenza, il resto della divisione 
del primo per il secondo è zero 
o il resto della divisione del 
secondo per il primo è zero)

Specifica:
input (x1...xn)
pre-condizione (x1...xn) app Z

output q variabile booleana
post-condiozini q vale vero se esiste una coppia
uno dei due interi della 
coppia divide l’altro se è falso
non è vero 
Problema di esistenza universare 
(scatola[i]%(scatola[i+1]==0)||
[-2, 6, 3, 9].. ..
3 6 2 4
*/
#include<stdio.h>
int adiacentiDivisibili(int scatola[],int n)
{
	int q=1;//variabile booleana
	int i=0;//variabile contatore
	while(i<n-2 && q)
	{
		/*if ((scatola[i]%scatola[i+1]!=0)||(scatola[i+1]%scatola[i]!=0))
		{
			q=0;
		}*/
		if ((scatola[i]%scatola[i+1]!=0)||(scatola[i+1]%scatola[i]!=0))
		{
			q=0;
		}
		i++;
	}
	return q;//restituisci la variabile booleana

}

//funzione principale
int main()
{
	/*input*/
	printf("verifichero la proprieta'\nData una sequenza di interi, verificare se ciascuna coppia\n di interi adiacenti nella sequenza\n è tale che uno dei due interi\n della coppia divide l’altro\n");
	int n;
	printf("inserisci la lunghezza della sequenza\n");
	scanf_s("%d",&n);
	int scatola[n];//dichiara arrey monodimensionale
	/*prendi elementi della sequenza*/
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci elemento %d della sequenza\n",i+1 );
		scanf_s("%d",&scatola[i]);
	}
	int q=adiacentiDivisibili(scatola,n);
	if (q)
	{
		printf("sodisfa la proprieta' nell'insieme \n");
	}
	else
	{
		printf("non sodisfa la proprieta' nell'insieme\n");
	}

}//end main