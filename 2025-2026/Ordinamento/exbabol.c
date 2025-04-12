#include <stdio.h>
#include <stdlib.h>
void scambia(int* sca,int i,int j)
{
    int tamp= sca[i];
    sca[i]=sca[j];
    sca[j]= tamp;
}//chiusura scambia
void ordina(int* sca,int n)
{
    int verifica= 1;
    int NonOrdinato= n-1;
    while (NonOrdinato>0 && verifica)
    {
        verifica=0;
        for (int j = 0; j <= NonOrdinato-1; j++)
        {
            if (sca[j+1]<sca[j])
            {
                scambia(sca,j,j+1);
                verifica=1;
            }
            
        }
        NonOrdinato--;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ",sca[k]);
        
    }
}//chiusura ordinato 
int main()
{
    int n;
    printf("ciao sono un programma che mette inordi i numeri\n");
    printf("inserisci la lunghezza della sequenza");
    scanf_s("%d",&n);
    int scatola[n];
    for (int i = 0; i < n; i++)
    {
        printf("inserisci il numero %d\n",i+1);
        scanf_s("%d",&scatola[i]);
    }
    ordina(scatola,n);
    return 0;
}