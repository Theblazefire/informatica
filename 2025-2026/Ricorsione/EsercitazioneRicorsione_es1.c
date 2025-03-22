/*
=========================================
UNO PARI UNO POSITIVO
=========================================

Realizzare un programma che legge una 
sequenza di interi e verifica se 
esiste almeno una coppia di interi 
consecutivi di cui uno è pari e 
l’altro è positivo.

Task 1: Definire una funzione pariPositivo 
che verifica in maniera ricorsiva se, 
in un array di numeri interi, esiste 
almeno una coppia di interi consecutivi 
di cui uno è pari e l’altro è positivo.  

Task 2: Definire una funzione main che 
legge una sequenza di numeri interi, 
memorizzandola in un array, ed invoca 
la funzione pariPositivo per verificare 
se esiste almeno una coppia di interi 
consecutivi di cui uno è pari e l’altro 
è positivo. La funzione main termina 
stampando un opportuno messaggio per l’utente.

*/
#include <stdio.h>
int pariPositivo(int* sca,int n,int i)//funzione Ricorsiva
{
    int ris;
    if (i+1==n)
    {
        ris=1;
    }
    else
    {
        ris=((sca[i]>0&&sca[i+1]%2==0)||
             (sca[i+1]>0&&sca[i]%2==0))&&pariPositivo(sca,n,i+1);
    }
    return ris;
    
}
/*Funzione Principale*/
int main()
{
    /*input*/
    printf("Ciao somo un programma che verifica in una sequenza di numeri\n se esiste una coppia di numeri nin cui uno sia pari e laltro sia positivo\n");
    int n;//dichiarazione dimensione Array
    printf("inserisci la lunghezza della sequenza\n");
    scanf("%d",&n);
    int scatola[n];//dichiarazione Array
    if (n>2)
    {
        for (int i = 0; i < n; i++)//inserisci elementi dell'Array
        {
            printf("inserisci il %d della sequenza",i+1);
            scanf("%d",&scatola[i]);
        }
        /*output*/
        if(pariPositivo(scatola,n,0))
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
        printf("non posso leggere sequenze minori di 2");
    }
    

    return 0;
}