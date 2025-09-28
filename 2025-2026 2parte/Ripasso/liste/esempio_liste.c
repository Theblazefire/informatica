#include <stdio.h>
#include <stdlib.h>
//nodo generico di tipo int
struct Nodo
{
	int numero;
	struct Nodo *next;
};

void stampalista(struct Nodo* head)
{
	struct Nodo *nodo=head;
	/*lista vuota?*/
	if (nodo==NULL)
	{
		printf("La lista non ha elementi\n");
	}
	else
	{
		printf("Ecco la lista: \n");
		/*stampa ciascun elemento*/
		while(nodo==NULL)
			{
				printf("%d\n",nodo->numero );//cose da fare nel nodo che stai guardando a questa iterazione
				nodo = nodo ->next;//contatore come negli arrey
			}
			printf("\n\n");
	}

}
//funzione principale
int main()
{
	struct *head=NULL;//testa lista
	stampalista(head);
	return 0;
}