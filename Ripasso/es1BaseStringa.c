#include <stdio.h>
#include <string.h>
int main()
{
	char stringa[]="ciao";//la stringa è un arrey che contiene elementi di tipo char
    stringa[3]='u';//modifica di un carattere posizionato al 4 posto
    int i=0;//contatore
    /*stampa 1 modo*/
    while(stringa[i]!='\0')
    {
	  printf("%c",stringa[i] );
	  i++;
    }
    printf("\n");
    /*stampa 2 modo*/
    printf("%s\n",stringa );
	return 0;
}