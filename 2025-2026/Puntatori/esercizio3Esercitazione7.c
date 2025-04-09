/*
=========================================
MASSIMO SEQUENZA DI INTERI
=========================================

Scrivere un programma che legge 
una sequenza di interi immessa 
dall’utente e calcola e stampa 
il massimo nella sequenza.

Devono essere definite le seguenti funzioni:

int massimo(int * sequenza, int lunghezza) 
che calcola e restituisce il massimo in 
una sequenza di interi.

int main() che gestisce 
l’interazione con l’utente. 
La funzione main inizialmente 
alloca memoria utilizzando la 
funzione malloc o 
la funzione calloc; 
la quantità di memoria allocata 
è a scelta dello studente.

Quindi il programma legge gli 
interi introdotti dall’utente, 
uno per volta, senza chiedere 
all’utente quanti interi ha 
intenzione di introdurre in totale.

Dopo ogni intero letto, il programma 
chiede all’utente se ha intenzione 
di introdurne un altro 
(leggendo un carattere ‘y’ o ‘n’). 
Se il numero di interi eccede la 
dimensione della memoria allocata, 
questa viene incrementata 
(di una quantità a scelta dello 
studente, ad esempio è possibile 
aggiungere una quantità costante 
di memoria, oppure raddoppiarla) 
per mezzo della funzione realloc. 
Terminata la lettura, la funzione 
main invoca la funzione massimo e 
ne stampa il valore restituito.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Rimassimo(int *sca, int n,int i,int max)
{
    //caso base
    if (i==n)
    {
        return max;
    }
    else
    {
        //passo induttivo
        if (sca[i]>max)
        {   
            max=sca[i];
        }

        return Rimassimo(sca,n,i+1,max);
        
    }
    }//chiusura Rimassimo
int massimo(int *sca, int n)
{
    return Rimassimo(sca,n,0,sca[0]);    
}
int main()
{
    /*INPUT*/
    printf("Ciao sono un programma che trovo in una sequenza il massimo\n");
    char stringa[50];//variabile di controllo
    int *scatola=malloc(sizeof(int));//dichiarazione array
    int i=0;//dichiarazione indice array 
    
    //prendi i numeri dall'utente
    do 
    {
        printf("inserisci il numero\n");
        scatola=(int*) realloc(scatola,(i+1)*sizeof(int));//assegna memoria
        scanf_s("%d",&scatola[i]);//prendi il numero e mettilo nel puntatore
        i++;//incrementa l'indice del puntatore
        printf("inserisci y per continuare altrimenti n\n");
        while (getchar()!='\0')//pulizia del buffer
        {
            printf("buffer pulito");
        }
        
        fgets(stringa,50,stdin);
        stringa[strlen(stringa)-1]='\0';
        
    } while(stringa[0]=='y');
    int max= massimo(scatola,i);//trova max della sequenza
    /*STAMPA*/
    printf("il max = %d della sequenza\n",max);
    return 0;
}

