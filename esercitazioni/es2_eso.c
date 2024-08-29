/*
Una funzione differenzaNumerici 
riceve come parametro una stringa 
e restituisce la massima 
differenza (in valore assoluto) 
fra due caratteri numerici che 
appartengono alla stringa e fra i quali non 
ci sono altri caratteri numerici, 
oppure -1 se la stringa non contiene 
due caratteri numerici. 

Ad esempio, se la stringa ricevuta come parametro 
è "d2ngf67m", la funzione restituisce 
il valore 4, in quanto la differenza 
fra 6 e 2 è 4, e fra 6 e 2 non 
compaiono altri caratteri numerici. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype>
void differenzaNumerici(char* string)
{
	int i=0;//contatore string
	int numero=-1;//variabile di controllo
	/*leggi stringa*/
	while(string[i]!='\0')
	{
		/*trova numeri nella stringa*/
		if (isdigit(string[i]))
		{
			/*converti il carattere a numero*/
			int n1= string[i]-'0';

			if (numero!=-1)
			{//sc67vcw
              /*svolgi la differenza*/
		      int differenza= abs(numero-n1);
			}
			numero=n1;

		}
		i++;	
	}
	printf("%d\n", differenza);
	
}
int main()//funzione principale
{
	/*input*/
	printf("faccio la differenza fra due numeri in una stringa\n");
	printf("inserisci una stringa\n");
	/*prendi la stringa*/
	int string[50];
	fgets(string,50,stdin);
	/*elimina \n*/
	string[strspn(string,'\n')]='\0';
	differenzaNumerici(string);
}