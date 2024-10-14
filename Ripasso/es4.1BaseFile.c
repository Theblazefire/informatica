#include <stdio.h>
#include <string.h>
void copia(FILE *Ifile,FILE *Ofile)
{
	char c;
	while(fscanf(Ifile,"%c",&c)>0)
	{
		fprintf(Ofile,"%c", c);
	}
}
int main()
{
	FILE *Ifile,*Ofile;
	char nume[50];
	char numecopia[50];
	printf("posso copiare un file di testo\n");
	printf("inserisci il nume del file\n");
	fgets(nume,50,stdin);
	//elimina \n
	nume[strlen(nume)-1]='\0';
	printf("inserisci il nume del file copiato\n");
	fgets(numecopia,50,stdin);
	//elimina \n
	numecopia[strlen(numecopia)-1]='\0';
	/*copia file*/
	Ifile=fopen(nume,"r");
	Ofile=fopen(numecopia,"w");
	copia(Ifile,Ofile);
fclose(Ifile);
fclose(Ofile);
	return 0;
}