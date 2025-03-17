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
    /*leggi la stringa*/
    while (str[i]!='\0')
    {
        /*eliminazione dei non caratteri*/
        if (!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
        {
            j=i;
            while (str[j]!='\0')
            {
                str[j]=str[j+1];
                j++;
            }
        
            /*divisioni di coppie*/
        if (
            (((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))&&
            ((str[i+1]>='a'&&str[i+1]<='z')||(str[i+1]>='A'&&str[i+1]<='Z')))||
            ((str[i+2]>='a'&&str[i+2]<='z')||(str[i+2]>='A'&&str[i+2]<='Z'))
           )//abcdefg->abc d
        {
            j=i+3;
            while (str[j]!='\0')
            {
                str[j+1]=str[j];
                str[j]=' ';
                j++;
            }
            printf("%s",str);
        }

        }
        else
        {
            i++;
        }
    }
   
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