/*
--------------------
1) SOMMA TRE CONSECUTIVI
--------------------

Progettare un algoritmo per risolvere 
il seguente problema. 
ex:
Data una sequenza di 
interi con almeno tre elementi, 
calcolare la somma massima di tre interi 
consecutivi nella sequenza. Ad esempio 
es:
se la sequenza di interi è 
[2, 3, -4, 1, 1, 0, -1], 
la soluzione dell’istanza del problema è 2. 
Infatti gli interi 1, 1 e 0 sono 
consecutivi ed hanno somma 2; 
inoltre ogni altra tripla di interi 
consecutivi nella sequenza ha somma 
non maggiore di 2.
sotto ex:
Descrivere la specifica del problema 
ed un algoritmo risolutivo, illustrato 
tramite un diagramma a blocchi.

Specifica:
input/dati in ingresso (x1...xn)
pre-condizione (x1...xn) app Z
output/dati in uscita 2
post-condizione (x1+...+xn)=2 app Z
10 4 5 8
*/
#include <stdio.h>
int main()
{
	//input
	int Num,x,n;//dichiarazioni variabili
	
	printf("inserisci il numero della lista di numeri.\n deve essere piu' alta di 3 numeri\n");
    scanf_s("%d",&n);
    if (n>=3)//controllo che ci sia una tripla
    {
    	int scatola[n];//dichiarazione di un arrey
    	//prendi i numeri della lista
    	for (int i = 0; i < n; ++i)
    	{
    		printf("inserisci il numero %d della tua sequenza\n", i );
    		scanf_s("%d", &scatola[i]);
    	}
    	//ricava il massimo fra la somma dei primi 3 numeri
    	int SomMax=scatola[0]+scatola[1]+scatola[2];
    	
    	int i = 0;
    	do{
    		Num=scatola[i]+scatola[i+1]+scatola[i+2];//ricava la somma
    		if (Num>SomMax)//rivaca il massimo della somma
    		{
    			SomMax=Num;
    		}
    		i++;

    	}while(i<n-2);
    	printf("il max %c %d \n",138, SomMax);
    }
    else
    {
    	printf("la sequenza e' piu' piccola di 3\n");
    }
	
	return 0;
}