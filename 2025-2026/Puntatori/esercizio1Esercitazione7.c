/*
=========================================
DIVIDI INTERI
=========================================

Scrivere un programma che legge due interi 
introdotti dall'utente e stampa il quoziente 
ed il resto della divisione intera fra il più 
grande ed il più piccolo dei due interi. 
Il programma non deve utilizzare nessuna 
variabile di tipo int, ma solo variabili di tipo int*.

Devono essere definite le seguenti funzioni:

int * allocaMemoria() che alloca memoria 
per un intero e restituisce 
l'indirizzo dell'area di memoria allocata.

void leggiValore(int * variabile) 
che legge un valore introdotto 
dall'utente e lo memorizza 
all’indirizzo specificato nel 
parametro formale.

void riordina(int * a, int * b) 
che riordina due valori interi, 
di cui sono forniti gli indirizzi 
nei parametri formali, così che il 
primo sia più grande del secondo.
----------------------------------------------------------------------

void calcolaQuoziente(int* dividendo, int* divisore, int* quoziente) 
che calcola il quoziente della divisione intera fra due interi, 
di cui sono forniti gli indirizzi nei parametri formali, 
e memorizza tale quoziente 
all’indirizzo specificato nel parametro formale.

void calcolaResto(int* dividendo, int* divisore, int* resto) 
che calcola il resto della divisione intera fra due interi, 
di cui sono forniti gli indirizzi nei parametri formali, 
e memorizza tale resto all’indirizzo specificato nel parametro formale.

int main() che gestisce l’interazione con l’utente, 
invocando le altre funzioni per allocare memoria, 
leggere i valori introdotti dall’utente, 
ordinarli dal più grande al più piccolo, e 
calcolare e stampare il quoziente ed il resto 
della divisione intera fra i due interi.
*/
#include <stdio.h>
#include <stdlib.h>
int* allocaMemoria()//funzione che alloca memoria
{
    int *allocaMemoria;
    allocaMemoria= (int*) malloc(sizeof(int));//alloca e converti in modo splicitò la memoria da void a int
    
    return allocaMemoria;
}//chiusura allocaMemoria
void leggiValore(int* variabile)
{
    scanf("%d",variabile);/*inserisci indirizzo della variabile 
    che contiene numero dell'utente, il quale punta il puntatore Pn1*/

    //printf("numero inserito %d\n", *variabile);//debug stampa il numero nel puntatore
}//chiusura leggiValore
void riordina(int * a, int * b) 
{
    int oldN;

    /*debug*/
    //printf("a= %d\n",*a);
    //printf("b= %d\n",*b);
    
    if (*a<*b)
    {
        oldN=*a;
        *a=*b;
        *b=oldN;
        
    }
    /*debug*/
    /*printf("a= %d\n",*a);
    printf("b= %d\n",*b);*/
}//chiusura riordina
void calcolaQuoziente(int* dividendo, int* divisore, int* quoziente)
{
    *quoziente= *dividendo / *divisore;
}//chiusura calcolaQuozioente
void calcolaResto(int* dividendo, int* divisore, int* resto) 
{
    *resto= *dividendo % *divisore; //ricava il resto
}
int main()
{
    /*input*/
    printf("ciao sono un programma che divide solo due nemeri\n");
    printf("svolgo divisioni intere e ti fornisco il quoziente e il resto\n");
    printf("inserisci il 1° numero\n");
    int *Pn1,*Pn2,*Pquo,*Prest;//dichiarazione puntatori interi
    Pn1= allocaMemoria(); //Dai memoria al puntatore
    Pn2= allocaMemoria(); //Dai memoria al puntatore
    Pquo= allocaMemoria();//Dai memoria al puntatore
    Prest= allocaMemoria();//Dai memoria al puntatore
    if (allocaMemoria()==NULL)//se la memoria non è stata allocata stampa un sms all'utente
    {
        printf("non ho allocato la memoria\n");
    }
    printf("inserisci il primo numero\n");
    leggiValore(Pn1);//funzione per prendere elementi dall'utente
    printf("inserisci il secondo numero\n");
    leggiValore(Pn2);//funzione per prendere elementi dall'utente
    
    riordina(Pn1, Pn2);//se n1 e piccolo fallo entrare nella variabile max 
    calcolaQuoziente(Pn1,Pn2,Pquo);
    printf("quozionete %d\n",*Pquo);
    calcolaResto(Pn1, Pn2, Prest);
    printf("resto %d\n",*Prest);
return 0;
}