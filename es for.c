//stampare da 0 a 99
/*
0 1 2 3
4 5 6 7
1=ix10^1+j*10^0

*/
#include <stdio.h>
int main()
{
	for (int i = 0; i <= 9; ++i)
	{
		for (int j = 1; j < 9; ++j)
		{
			printf("%d ",i*10^1+j*10^0 );
		}
	}
	return 0;
}