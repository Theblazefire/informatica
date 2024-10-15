/*
(6 pt) 
Una funzione soloAlfabetici riceve 
come parametro una stringa 
e la modifica eliminando tutti i 
caratteri che non sono alfabetici. 

Ad esempio, se la stringa ricevuta 
come parametro è 
"ah5$56knFGJ=) 12g", 
la stringa verrà modificata in "ahknFGJg"
*/

#include <stdio.h>
#include <string.h>
void verifica(char* str)
{
	int i=0,j=0;
	//leggi la stringa
	while(str[i]!='\0')
	{
		if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='A'&&str[i]<='Z') )
		{
			/* code */
		}
		else
		{
			//elimina caratteri che non sono lettere
			j=i;//inserisci il contatore letto in quel momento
			//leggi carattere
			while(str[j]!='\0')
			{//elima carattere
				str[j]=' ';
				str[j]=str[j+1];
				j++;

			}//ah56knFGJ=) 12
		}
		i++;
	}
}
int main()
{
	char stringa[50];
	
	//input
	printf("ciao leggo la stringa e elimino le vocali\nche sono vicino a numeri a doppia cifra in una tripla\n");
	printf("inserisci la stringa\n");
	//prendi la stringa
	fgets(stringa,50,stdin);
	//elimina \n
	stringa[strlen(stringa)-1]='\0';
	verifica(stringa);
printf("stringa= %s\n", stringa);
}