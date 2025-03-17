/*
(6 pt) Una funzione soloAlfabetici riceve come parametro una stringa e la modifica eliminando tutti i 
caratteri che non sono alfabetici. Ad esempio, se la stringa ricevuta come parametro è 
"ah5$56knFGJ=) 12g", la stringa verrà modificata in "ahknFGJg". 
*/
#include <stdio.h>
#include <string.h>

void soloAlfabetici(char* str)
{
    int i=0;//dichiarazione indice
    int j=0;
    /*leggi la stinga*/
    while (str[i]!='\0')
    {
        if (!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
        {
            j=i;
            /*elimina caratere*/
            while (str[j]!='\0')
            {
                str[j]=str[j+1];
                printf("la stringa con solo lettere %c %s\n", 138, str);
                j++;//fai scorere il caratere
            }
            
        }
        
        i++;//fai scorere i caratteri
    }
   
}
/*funzione principale*/
int main()
{
    printf("Posso leggere la stringa ed eliminare caratteri non alfabetici\n");
    printf("inserisci la stringa \n");
    char stringa[50];//dichiarazione stringa
    fgets(stringa,50,stdin);//prendi la stringa
    stringa[strlen(stringa)-1]='\0';//cancella l'invio
    soloAlfabetici(stringa);
    printf("la stringa con solo lettere %c %s", 138, stringa);
    return 0;
}