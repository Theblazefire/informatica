#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cancNum(char* string1)//inserimento di una stringa nella funzione
{
	int i=0;//contatore
	int j;//contatore della concellazione
	while(string1!='\0')
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
			}
		}
		i++;

	}
	printf("%s\n",string1 );

}
void canclettere()
{

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

	return 0;
}