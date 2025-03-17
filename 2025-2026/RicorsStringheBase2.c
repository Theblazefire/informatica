/*
Esercizio 2 (ContaCaratteriStringa) 
Scrivere un programma che, dati in 
input una stringa e un carattere, 
conta il numero di occorrenze del 
carattere nella stringa, ossia quante 
volte il carattere compare nella stringa. 
Definire una funzione ricorsiva per tale conteggio.
*/
#include <stdio.h>
#include <string.h>
int ContaCaratteriStringa(char *str,int i,int cont)
{
    if (str[i]=='\0')
    {
        return cont;
    }
    else
    {
        return ContaCaratteriStringa(str,i+1,cont+1);
    }
}

int conta(char* str)
{
    return ContaCaratteriStringa(str,0,0);
}
/*Funzione Principale*/
int main()
{
    printf("ciao sono un programma che legge i caratteri della stringa\n");
    char string[50];
    /*input*/
    printf("inserisci la stringa");
    fgets(string,50,stdin);//prendi la stringa
    string[strlen(string)-1]='\0';//elimina \n
    int k= conta(string);
    printf("ho trovato %d caratteri",k);
    return 0;
}