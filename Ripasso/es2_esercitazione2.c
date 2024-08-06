/*
Scrivi un programma che chiede all'utente di inserire quattro numeri interi, li legge e stampa uno dei seguenti messaggi:

- "Ci sono esattamente 4 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,1)

- "Ci sono esattamente 3 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,2)

- "Ci sono esattamente 2 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,3)

- "Ci sono due coppie di numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,2)

- "Ci sono esattamente 0 numeri fra loro uguali" (se i numeri sono ad esempio 1,2,3,4)

Parte NON ESSENZIALE, ma riservata solo agli studenti più curiosi. Come si risolve l'esercizio potendo utilizzare solamente istruzioni di stampa e lettura, l'operatore di assegnamento, operatori matematici (+, -, *, /), operatori di confronto (==, >, ...), ed UNA SOLA ISTRUZIONE IF-ELSE? Sono quindi vietate istruzioni ripetitive, istruzioni condizionali diverse da if-else, array, stringhe, operatori logici (||, &&, !) ...

Se riesci a risolvere la parte non essenziale, invia la tua soluzione a frati@dia.uniroma3.it. Una soluzione verrà pubblicata online quando almeno uno studente avrà inviato una soluzione corretta.

specifica
input (x1...x4)
pre-condizione (x1--x4) app Z
output q variabile booleana
post-condizione q esistenza di numeri uguali fra di loro
*/
#include <stdio.h>
int main()//funzione principale
{
	//input
	int n=4, x[4];	
	for (int i = 0; i < n; ++i)
	{
	  	printf("inserisci il %d della sequenza\n", i);
	  	scanf_s("%d",&x[i]);
	}

	//svolgimento e stampa	
		if (x[0]==x[0+1]&&x[0]==x[0+2]&&x[0]==x[0+3])
		{
			printf("Ci sono esattamente 4 numeri fra loro uguali\n");
		}
		else
		{
			if (x[0]==x[1]&&x[0]==x[0+2]&&x[0]!=x[0+3])
			{
				printf("Ci sono esattamente 3 numeri fra loro uguali\n");
			}
			else
			{
			    if (x[0]==x[1]&&x[2]==x[3])
			    {
						printf("Ci sono due coppie di numeri fra loro uguali\n");
				}
				
				else
				{
					if (x[0]==x[1]&&x[0]!=x[2]&&x[0]!=x[3])
				    {
					  printf("Ci sono esattamente 2 numeri fra loro uguali\n");
				    }
					else
					{
						if (x[0]!=x[1]&&x[0]!=x[2]&&x[0]!=x[3])
						{
							printf("Ci sono esattamente 0 numeri fra loro uguali\n");
						}
					}
				}
			}
		}
		
}