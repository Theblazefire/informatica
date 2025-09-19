/*
inserire una tripla la quale ha i numeri sopra il 10 e un numero pari
*/

#include <stdio.h>
//funzione di verifica
int verfico(int* sca,int n, int i)
{
    int ris;
    /*CASO BASE*/
    if (i+2==n)
    {
        // Se siamo arrivati agli ultimi 2 elementi utilizzabili,
        return ris=1;
    }
    else
    {
        /*PASSO INDUTTIVO*/
        ris=(//proprietà

        )
    }

    
}

//funzione per aggiungere contatore
int leggo(int* sca,int n)
{
    return verfico(sca,n,0);
}
//funzione principale
int main(){
    int n;//dichiarazione lunghezza arrey
    printf("ciao sono un programma che verifica una tripla che ha tutti numeri maggiori di 10 e uno pari");
    printf("inserisci la lunghezza della tripla\n");
    scanf("%d",&n);
    if(n==3)//verifica lunghezza tripla
    {
        //input
    int scatola[n];//dichiarazione arrey
    printf("inserisci i numeri della tripla\n");
    for(int i=0;i<n;i++)
    {
        printf("serisci %d numero della tripletta",i+1);
        scanf("%d",scatola[i]);
    }

        if(leggo(scatola,n))//chiamata funzione
        {
            printf("1");
        }
        else
        {
            print("0");
        }

    }
    else
    {
        printf("riprova la tripla non %c una tripla",138);
    }
    return 0;
}