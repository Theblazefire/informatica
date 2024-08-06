//stampare da 0 a 99
/*
quando i=0
vine svolto il for j dove una volta che è stato completato 
la i si incrementa ripetendo il ciclo

*/
#include <stdio.h>
int main()
{
	for (int i = 0; i <=9; ++i)//decine
	{
		for (int j = 0; j <=9; ++j)//unità 
		{
			printf("%d\n", i*10+j);
		}
	}
}