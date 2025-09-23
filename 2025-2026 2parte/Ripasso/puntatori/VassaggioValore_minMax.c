/*
ordina due numeri dell'utente usando i puntatori
*/
#include <stdio.h>
void ordino(int* n1, int* n2)
{
	if (*n1>*n2)
	{
		int k=*n1;
		*n1=*n2;
		*n2=k;
	}

}
//funzione principale
int main()
{
	int a,b;
	printf("ciao sono un programma.\nPosso ordinare due numeri\n");
	printf("inserisci un numero\n");
	scanf("%d",&a);
	printf("inserisci un numero\n");
	scanf("%d",&b);
	ordino(&a,&b);
	printf("i numeri sono in ordine: %d,%d\n",a,b );
	return 0;
}