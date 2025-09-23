/*stampa i primi dieci numeri della sequenza di subonacci*/
#include <stdio.h>
int main()
{
	int scatola[]={1, 1, 2, 3, 5, 8, 13, 21, 34, 55,};
	int *punto=scatola;//assegno l'arrey
	for (int i = 0; i < 10; i++)
	{
		//stampa della sequenza
		printf("%d\n",*(punto+i)//stampa dei elementi dell'arrey );
	}
	return 0;
}