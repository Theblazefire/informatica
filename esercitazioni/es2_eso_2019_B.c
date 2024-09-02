/*
Specifica
input (x1...xn)
pre-condizione (x1...xn) app Z
output q variabile booleana
post-condiozine q è vera se esiste
una tripla con due elementi positivi
e due alementi dispari altrimenti vale 
falso
*/
#include <stdio.h>

int tripleDuePosDueDis(int sca[], int n)
{
	int i=0;
	int q=0;
	while(i<=n-2&&!q)
	{// -1 2 4 -3
		if (
			((sca[i]%2==0 && sca[i+1]%2==0 )||
			(sca[i]%2==0 && sca[i+3]%2==0 )||
			(sca[i+1]%2==0 && sca[i+2]%2==0 ))
			&&
			((sca[i]>=0 && sca[i+1]>=0 )||
			(sca[i]>=0 && sca[i+2]>=0 )||
			(sca[i+1]>=0 && sca[i+2]>=0 ))
		   )
		{
			q=1;
		}
		else
		{
		i++;	
		}

	}
return q;
}
int main()
{
	printf("verifico se in una sequenza esiste una tripla");
    printf("con 2 elementi pari e 2 elementi dispari\n");
    printf("insersci lunghezza sequenza\n");
    int n;
    scanf_s("%d",&n);
    int scatola[n];
    if (n>=3)
    {
    	//prendi gli elementi
    	for (int i = 0; i < n; ++i)
    	{
    		printf("inserisci elemento %d della sequenza\n",i+1 );
    		scanf_s("%d",&scatola[i]);
    	}
    	if(tripleDuePosDueDis(scatola,n))
    	{
    		printf("1\n");
    	}
    	else
    	{
    		printf("0\n");
    	}

    }
    else
    {
    	printf("inserisci una sequenza di almeno 3 elementi\n");
    }

	return 0;
}