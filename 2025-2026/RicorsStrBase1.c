/*
Esercizio 1 (AlmenoUnaMinuscola) 
Scrivere un programma che prende in input 
una stringa non vuota di caratteri e che 
restituisce true se la stringa è composta 
da almeno un carattere alfabetico minuscolo, 
false altrimenti. Tale verifica deve essere 
realizzata attraverso una funzione ricorsiva.
*/
#include <stdio.h>
#include <string.h>
int solomaiuscole(char* str,int *i)
{
    int k=0;
    /*caso base*/
    if (str[i]!='\0'&&k==1)
    {
        k=1;
    }
    else
    {//passo inditivo
        k=(str[i]>='A'&&str[i]<='Z')&&solomaiuscole(str,i+1);
    }
    return k;
}
int verifica(char* str)
{
    return solomaiuscole(str,0);
}
/*funzione Principale*/
int main()
{
    printf("verifico se esiste almeno un carattere maiuscolo nella stringa\n");
    char stringa[50];//dichiaro stringa
    /*Input*/
    fgets(stringa,50,stdin);//prendi la stringa
    stringa[strlen(stringa)-1]='\0';//elimina \n
    verifica(stringa);
    return 0;
}