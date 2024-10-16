/*
6 pt) 
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
void nienteDoppieMaiuscole(char* str)
{
	int i=0,j=0;
	//leggi la stringa
	while(str[i]!='\0')
	{
		if (((str[i]>='A')&&(str[i]<='Z'))&&((str[i+1]>='A')&&(str[i+1]<='Z')))
		{
			if (str[i]==str[i+1])
			{//elimina uno dei due numeri uguali
				j=i;
				while(str[j]!='\0')
				{//RccFFF666RFfhJJ
					str[j]=str[j+1];
					j++;
				}
				  if (str[i]==str[i+1])
			       {//elimina uno dei due numeri uguali
				    j=i;
				    while(str[j]!='\0')
				     {//RccFFF666RFfhJJ
					   str[j]=str[j+1];
					   j++;
				     }

			       }

			}
		}
		
		i++;
	}
}
//funzione principale
int main()
{
	char stringa[50];//dichiarazione stringa
	/*input*/
	//messaggio utente
	printf("ciao, sono un programma che legge una stringa\nelimino una lettera in cui ha la ripetizione adiacente\n");
	printf("esempio RccFFF666RFfhJJ->RccF666RFfhJ\n");
	printf("inserisci la stringa\n");
	//prendi la stringa
	fgets(stringa,50,stdin);
	//elimina \n
	stringa[strlen(stringa)-1]='\0';
	nienteDoppieMaiuscole(stringa);
	printf("stringa= %s\n", stringa);
}//chiusura mian