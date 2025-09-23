/*
inserire una tripla la quale ha i numeri sopra il 10 e un numero pari
*/

#include <stdio.h>
//funzione di verifica
int verifico(int* sca,int n, int i)
{
    int ris;
    /*CASO BASE*/
    if (i+2==n)
    {
        // Se siamo arrivati agli ultimi 2 elementi utilizzabili,
        ris=1;
    }
    else
    {
        /*PASSO INDUTTIVO*/
        ris=
        (//proprietà 10 12 20; 10 11 11; 11 10 11; 11 11 10;
            //-----prima parte numeri <10-----
            ((sca[i]>=10&&sca[i+1]>=10)&&(sca[i]>=10&&sca[i+2]>=10)&&(sca[i+1]>=10&&sca[i+2]>=10))
            &&
            //-----seconda\1 parte almeno un numero pari-----
            (
            ((sca[i]%2==0)||(sca[i+1]%2==0)||(sca[i+2]%2==0))
            &&
            (
               !(sca[i]%2==0||sca[i+1]%2==0)
             ||!(sca[i]%2==0||sca[i+2]%2==0)
             ||!(sca[i+1]%2==0||sca[i+2]%2==0)
            )
            )

        )&&verifico(sca,n,i+1);//aumenta il contatore
    }

    return ris;
}

//funzione per aggiungere contatore
int leggo(int* sca,int n)
{
    return verifico(sca,n,0);
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
        printf("serisci %d numero della tripletta\n",i+1);
        scanf("%d",&scatola[i]);
    }

        if(leggo(scatola,n))//chiamata funzione
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
        printf("riprova la tripla non %c una tripla",138);
    }
    return 0;
}