#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cancNum(char* string1)//inserimento di una stringa nella funzione
{
	int i=0;//contatore
	int j;//contatore della concellazione
	while(string1[i]!='\0')
	{
		if (
			!(
			(string1[i]>='A'&&string1[i]<='Z')||
			(string1[i]>='a'&&string1[i]<='z')
			 )
		   )
		{
			//cancella il numero rre[51e\0]
			j=i;
			while(string1[j]!='\0')
			{
				string1[j]=string1[j+1];
				j++;
			
			}
		}
		i++;

	}
	printf("%s\n",string1 );

}
void canclettere(char* string2)
{
	int i=0,j;
	//leggi la stringa
	while(string2[i]!='\0')
	{
		if (!(string2[i]>='0'&&string2[i]<='9'))
		{
			j=i;
			//cancella
			while(string2[j]!='\0')
			{
				string2[j]=string2[j+1];
				j++;
			}
		}
		i++;
		
	}//while lettura
printf("%s\n", string2);
}
int main()
{
	//input
	char string1[20];
	char string2[20];
	printf("inserisci una stringa cancello i numeri\n");
	//prendi la stringa
	fgets(string1,20,stdin);
	cancNum(string1);
	printf("inserisci una stringa cancello le lettere\n");
	//prendi la stringa
	fgets(string2,20,stdin);
	canclettere(string2);
	
	return 0;
}