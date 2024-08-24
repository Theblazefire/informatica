/*
triplica gli elementi della 
sequenza tramite una funzione

specifica
input (x1...xn)
pre-condizione (x1...xn) app Z
output stampa (x1...xn)
post-condizione (x1*3...xn*3) app Z
*/
#include<stdio.h>

//funz che triplica gli elementi della sequenza
void SeqTripl(int scatola[],int n)
{
	
	for (int i = 0; i < n; ++i)
    {
	printf("%d ", scatola[i]=scatola[i]*3);
    }

}//end SeqTripl

//Funzione principale 
int main()
{
	//input
	printf("inserisci un sequenza. Gli elementi dell'insieme li triplicherò\n");
	printf("inserisci lunghezza sequenza\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];//arrey

	//prendi gli elementi della sequenza
	for (int i = 0; i < n; ++i)
	{
		printf("inserisci l'elemento %d della sequenza\n", i);
		scanf_s("%d",&scatola[i]);
	}
	//triplica gli elementi della sequenza
	SeqTripl(scatola,n);
}//end main