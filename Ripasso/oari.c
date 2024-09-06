#include <stdio.h>
int main()
{
	printf("inserisci un numero porco dio\n");
	int x;
	scanf_s("%d",&x);
	if (x%2==0)
	{
		printf("pari\n");
	}
	else
	{
		printf("dispari\n" );
	}
	return 0;
}