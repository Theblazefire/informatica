/*
=========================================
TUTTI ALTERNATI
=========================================

Realizzare un programma che legge una 
sequenza di interi e verifica 
se i numeri positivi e negativi 
si alternano nella sequenza.

Task 1: Definire una funzione 
tuttiAlternati che verifica in maniera 
ricorsiva se, in un array di numeri interi, 
i numeri positivi e negativi si alternano.

Task 2: Definire una funzione main che legge 
una sequenza di numeri interi, memorizzandola 
in un array, ed invoca la funzione 
tuttiAlternati per verificare se i numeri 
positivi e negativi si alternano nella 
sequenza. La funzione main termina stampando 
un opportuno messaggio per l’utente.
*/
#include <stdio.h>
int tuttiAlternati(int* sca,int n,int i)//funzione ricorsiva
{
    int k;
    if (i==n)
    {
        k=1;
    }
    else
    {
        k=((sca[i]>=0&&sca[i+1]<=0)||
        (sca[i+1]>=0&&sca[i]<=0))&&tuttiAlternati(sca,n,i+1);
    }
    
}
/*Funzione Principale*/
int main()
{
    /*input*/
    printf("Ciao sono un programma che verifica un insieme di numeri se sono alternati fra nmumeri positivi e negatibi\n");
    printf("inserisci la lunghezza della sequenza");
    int n;
    scanf("%d",&n);
    int scatola[n];
    if (n>1)
    {
        for (int i = 0; i < n; i++)
        {
            printf("inserisci l'elemento %d della sequenza\n",i+1);
            scanf("%d",&scatola[i]);
        }
                /*output*/
                if(tuttiAlternati(scatola,n,0))
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
    }
    else
    {
        printf("la sequenza deve avere almeno due valori\n");
    }
    
    return 0;
}