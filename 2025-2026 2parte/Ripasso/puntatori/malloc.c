/*alloca nell'heap memoria tramite malloc di 10 numeri
e eliminala dopo il loro utilizzo con free*/
#include <stdio.h>
#include <stdlib.h>
//funzione principale
int main()
{
	int *punto=(int*)malloc(10*sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		*(punto+i)=i+1;
	}
			for (int i = 0; i < 10; ++i)
			{
				printf("numero allocato: %d\n",*(punto+i) );
			}

	free(punto);
	if (punto==NULL)
	{
		printf("memoria deallocata\n");
	}
	

	return 0;
}