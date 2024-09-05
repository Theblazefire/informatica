#include <stdio.h>
int main()
{
	void *punta=NULL;//puntatore generico vuoto
	int x=10;
	int *intpunta=(int*)punta;//conversione puntatore generico a tipo intero
	intpunta=&x;//asegnazione indirizo
	printf("%d\n",*intpunta );//stampa
	//---------------------------------
	void *Voidpunta=NULL;
	char Lettera='c';
	char *charPunta=(char*) Voidpunta;
	charPunta=&Lettera;
	printf("%c\n",*charPunta);
	//--------------------------------
	/*puntatori e arrey*/
	//gli Arrey sono puntatori
	void *puntatore=NULL;
	int scatola[]={21,23,432};
	int *NuovaIntPunta= (int*) puntatore;
	NuovaIntPunta= scatola;
	printf("%d\n",*NuovaIntPunta );
	printf("%d (secondo elemento dell'arrey)\n", *(NuovaIntPunta+1));
	*(NuovaIntPunta+1)=100;
	printf("%d (secondo elemento dell'arrey modificato)\n", *(NuovaIntPunta+1));

	//------------------------------------
	/*puntatori e stringhe*/
	//i puntatori sono diversi
	char stringa1[]="ciao sono una stringa";
	char *stringa2="ciao sono un puntatore che punta a una stringa nella memoria";
	printf("%s\n", stringa1	);
	printf("%s\n", stringa2	);
	return 0;
	
}