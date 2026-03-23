#include <stdio.h>
#include <stdlib.h>
void scambio(int* a,int* b){
	int temp= *a;
	*a= *b;
	*b=temp;
}
void ordina(int* sca,int n){
	int verifica=1;
	int NonOrdinato=n-1;
	while(NonOrdinato>0&&verifica){
	//è vero fino alla fine dell'arrey è il loop per gli scabi
	
		verifica=0;
		for (int j = 0; j <=NonOrdinato-1 ; j++)
		{
			if (sca[j+1]<sca[j])
			{
				scambio(&sca[j],&sca[j+1]);
				verifica=1;
			}		
		}
		NonOrdinato--;
	}
}

int main() {
    int n;
    printf("inserisci la lunghezza della sequenza\n");
    scanf("%d", &n);
    int scatola[n];
    for (int i = 0; i < n; i++) {
        printf("inserisci il numero %d\n", i + 1);
        scanf("%d", &scatola[i]);
    }
    ordina(scatola, n);
    // considera di aggiungere un loop per stampare il risultato!
    for (int i = 0; i < n; ++i)
    {
    	printf("%d ", scatola[i]);
    }
    return 0;
}