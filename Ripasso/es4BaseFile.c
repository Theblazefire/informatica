#include <stdio.h>
#include <string.h>
/*crea un programma che fa copie di un file*/
void copia(FILE *finp,FILE *fout)
{
	char c;
	//leggi un carattere alla volta nel primo file
	while(fscanf(finp,"%c",&c)>0)
	{
		//scrivi un carattere alla volta nel nuovo file
		fprintf(fout,"%c",c);

	}
}

int main()
{
	//input
	FILE *finp,*fout;
	char Istring[50];
	char Ostring[50];

	printf("posso copiare file con caretteri all'interno\n");
	printf("inserisci il nome del file da copiare\n");
	fgets(Istring,50,stdin);
	//elimina \n
	Istring[strlen(Istring)-1]='\0';
	//scanf_s("%s",Istring);
	printf("insersci nume del file copiato\n");
	fgets(Ostring,50,stdin);
	//elimina \n
	Ostring[strlen(Ostring)-1]='\0';
	//scanf_s("%s",Ostring);
	/*copia il file*/
	finp=fopen(Istring,"r");
	fout=fopen(Ostring,"w");
	copia(finp,fout);
	fclose(finp);
	fclose(fout);

	return 0;
}