/*
Data una sequenza di interi, 
verificare se ogni tripla 
di interi consecutivi nella 
sequenza contiene almeno due 
interi negativi ed almeno due 
interi pari. 

Ad esempio, la sequenza 
[-3, 4, -6, -2] è 
un’istanza positiva del 
problema, in quanto la 
tripla [-3, 4, -6] 
contiene due interi 
negativi (gli interi -3 e -6) 
e due interi pari 
(gli interi 4 e -6) e 
la tripla [4, -6, -3] 
contiene due interi negativi 
(gli interi -6 e -2) e tre 
interi pari (gli interi 4, -6 e -2). 
La sequenza [4, -6, 2, 8] 
è invece un’istanza negativa 
del problema, in quanto 
la tripla [-6, 2, 8] contiene 
un solo intero negativo
Specifica
input (x1...xn)
pre-condizione (x1...xn) app Z
output q variabile buleana
post-condizione q variabile buleana vale
verso se contiene almeno due 
interi negativi ed almeno due 
interi pari altrimenti è falso
*/
#include <stdio.h>
int TripleDueNegDuePari(int sca[],int n)
{
	int i=0;
	int con=0;
	for (int i = 0; i < n; ++i)
	{
		if (
			((sca[i]%2==0&&sca[i+1]%2==0)||
			(sca[i]%2==0&&sca[i+2]%2==0)||
			(sca[i+1]%2==0&&sca[i+2]%2==0))
			&&
			(
			 (sca[i]<0&&sca[i+1]<0)||
			(sca[i]<0&&sca[i+2]<0)||
			 (sca[i+1]<0&&sca[i+2]<0)
			)
		   )
		{
			con=con+1;
		}
	}	

	if (con>=2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	printf("verifico se nella sequenza esiste\n");
	printf("un tripla con due numeri pari e due numeri dispari\n");
	printf("inserisci lunghezza della sequenza\n");
	int n;
	scanf_s("%d",&n);
	int scatola[n];
	//prendi gli elementi
	for (int i = 0; i < n; ++i)
	{
		printf("insersci %d elemento della sequenza\n",i+1 );
	    scanf_s("%d",&scatola[i]);
	}
	if (TripleDueNegDuePari(scatola,n))
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}