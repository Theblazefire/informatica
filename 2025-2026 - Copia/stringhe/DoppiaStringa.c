#include <stdio.h>
#include <string.h>
int  doppiastringa(char* str)
	{
	int k=0;
	int i=0;//indice
	//Leggi la stringa
	while(str[i]!='\0')
	{

		if( (str[0]==str[i+1]) && (str[1]==str[i+2]) )
		{
			k=1;
		}

	i++;
	}
return k;
	}
int main()
{
	/*input*/
	char* stringa[60];
	printf("Ciao sono un programma che controlla se hai inserito\n due stringhe \n");
	fgets(stringa,60,stdin);
	stringa[strlen(stringa)-1]='\0';
	 if( doppiastringa(stringa) )
	{
		printf("ci sono due stringhe \n");
	}
	else
	{
	 printf("non ci sono due stringhe \n");
	}
}

