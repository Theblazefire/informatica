/*
(6 pt) Una funzione soloParole riceve come parametro una stringa e la modifica così che nella stringa 
compaiano solo le parole (ovvero le sequenze massimali di caratteri alfabetici maiuscoli o minuscoli 
non accentati) della stringa parametro, dove ogni due parole consecutive sono separate da un 
singolo spazio. Il primo e l’ultimo carattere della stringa devono quindi essere alfabetici, ammesso che 
la stringa parametro contenga dei caratteri alfabetici. Ad esempio, se la stringa parametro è 
"123abc6/   def1!! gh   ", allora la stringa deve essere modificata in "abc def gh".   
*/
#include <stdio.h>
#include <string.h>

/////////////////////////////////////
void soloParole(char* str)
{
    int i=0,j=0;
    int parola=0;//sei in una parola?
    /*leggi la stringa*/
    while (str[i]!='\0')
    {      
        if (((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
        {//abc123d ahb 31
            //iniziamo nuova parola?
            if (parola==0 && j>0)
            {
                str[j++] = ' ';
            }
            str[j++]=str[i];//copia il carattere in una sotto stringa
            parola=1;//siamo in una parola
        }
        else
        {
            parola=0;// non siamo in una parola
        }
        
       i++;   
    }
    str[j]='\0';
   
}
//funzione principale
int main()
{
    printf("correggo la stringa\n");
    printf("inserisci la stringa\n");
    char stringa[60];
    fgets(stringa,60,stdin);
    stringa[strlen(stringa)-1]='\0';
    soloParole(stringa);
    printf("la stringa modificata %c %s\n", 138, stringa);
    
}