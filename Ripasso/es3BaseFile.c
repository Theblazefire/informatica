#include <stdio.h>
int vedo(FILE *file)
{
	int num=0;
	char carat;
	//prendi un carattere del file
	while(fscanf_s(file,"%c",&carat)>0)
	{
		//vedi se il carattere è un numero e aumenta il contatore num
		if (carat>='0'&&carat<='9')
		{
			num++;
		}

	}
	return num;//restitusci il contatore num 
}
int main()
{
	FILE *file,*lettura;
	/*crea file*/
	file=fopen("archivio1.txt","w");
	fputs("0012345ciao_mondo67890",file);
	fclose(file);

	lettura=fopen("archivio1.txt","r");
	//stampa il numero dei caratteri numerici del file
	printf("ho trovato %d numeri nel file archivio1.txt\n",vedo(file) );
	return 0;
}