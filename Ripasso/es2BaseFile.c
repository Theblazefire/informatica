#include <stdio.h>
int main()
{
	FILE* file=fopen("leggimi.txt","w+");
	printf("insersci un numero lo inserisco nel file\n");
	int num;
	
	scanf_s("%d%*c",&num);
	fprintf(file, "%d",num );//scrivi nel file il numero inserito dall'utente
	fscanf(file,"%d",&num);//prendi il numero nel file
	printf("vedo nel file il numero %d\n",num );
	return 0;
}