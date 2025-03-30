/*
=========================================
STRINGA SOLO MAIUSCOLE
=========================================

Scrivere un programma che legge una stringa 
introdotta dall’utente, la modifica 
rimpiazzando ogni carattere alfabetico 
minuscolo con il corrispondente carattere 
alfabetico maiuscolo, quindi stampa 
la stringa modificata per l’utente. 

Devono essere definite le seguenti funzioni:

void maiuscole(char * stringa) 
che modifica la stringa parametro 
rimpiazzando ogni carattere alfabetico 
minuscolo con il corrispondente carattere 
alfabetico maiuscolo. All’interno della 
funzione non deve essere dichiarata nessuna 
variabile! Quindi la scansione della 
stringa e l’accesso ai suoi caratteri 
devono essere realizzati tramite 
l’aritmetica dei puntatori e l’utilizzo 
dell’operatore di indirezione (*).

int main() che gestisce 
l’interazione con l’utente, 
invoca la funzione maiuscole 
per modificare la stringa e 
stampa la stringa modificata.
*/
#include <stdio.h>
#include <string.h>
void maiuscole(char * stringa)
{
    int i=0;
    while (stringa[i]!='\0')
    {
        if (stringa[i]>='a'&&stringa[i]<='z')
        {
            stringa[i]=stringa[i] + ('A'-'a');
        }
        
        i++;
    }
    
}
int main()
{
    printf("Converto i caratteri da minuscolo in maiuscolo\n");
    printf("inserisci la stringa ");
    char stringa[50];
    fgets(stringa,50,stdin);
    stringa[strlen(stringa)-1]='\0';
    maiuscole(stringa); 
    printf("stringa modificata %s\n",stringa);

}