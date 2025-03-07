/*
Una funzione nienteDoppieMaiuscole 
riceve come parametro una stringa 
e la modifica eliminando tutte le 
ripetizioni consecutive di caratteri 
alfabetici maiuscoli. 

Ad esempio, se la stringa 
ricevuta come parametro è 
" RccFFF666RFfhJJ", 
la stringa verrà modificata in 
" RccF666RFfhJ". 
*/
#include <stdio.h>
#include <string.h>

char nienteDoppieMaiuscole(char* str)
{
	char str2[strlen(str)];

	for(int i=0; i<strlen(str);i++;)//leggi la stringa
	{// sAAdC\0 -> sAd
		if ( !((str[i]>='A') && (str[i]<='Z')) )
		{
		  str2[i]=str[i];
		}

		if( ((str[i]>='A') && (str[i]<='Z'))&&(str[i]!=str[i+1]) )
        {
	      str2[i]=str[i+1];
        }

	}
	return str2;
}

int main()
{
	/*input*/
	char stringa[50];
    fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';

	char r=nienteDoppieMaiuscole(stringa);
	printf("%s \n",r);

	
}