/*
utilizando i punatori trova il massimo
della sequenze inserita
*/
#include <stdio.h>
#include <stdlib.h>

int min(int* scaT,int n)
{
	int min=scaT[0];
	for (int i = 0; i < n; ++i)
	{
		if (min>scaT[i])
		{
			min=scaT[i];
		}
	}
	return min;
}
void* memoria()
{
	int *memo= (int*)malloc(1*sizeof(int));
	return memo;
}
/*funz principale*/
int main()
{
	int* scaTol=memoria();
	int n=1;
	int N=2;
	char c;
	
	/*input*/
	do{
		/*aumenta la dim Arrey*/
		if (n==N)
	    {
		   N*=2;
		   scaTol=(int*) realloc(scaTol,n);
	    }
		/*prendi numero*/
		printf("inserisci numero della sequenza\n");
		scanf_s("%d",&scaTol[n]);
		n++;

		/*condizone di continuo*/
		printf("vuoi inserire un altro numero?\n");
		printf("s->yes n->no\n");
		while (getchar() != '\n');
		scanf_s("%c",&c,1);
	
	}
	while(c!='n'&&c!='N');
	int m=min(scaTol,n);
	printf("min=%d\n", m);
	free(scaTol);
	return 0;
}