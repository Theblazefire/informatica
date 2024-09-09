/*
crea un programma che puoi utilizare 
per fare la lista della spessa
*/
#include <stdio.h>
#include <string.h>
int main()
{
	/*imput*/
	printf("posso farti la lista della spesa\n");
	int num=0;
	int fals=0;
	/*crea un file*/
	FILE* file=fopen("lista_della_spesa.txt","w+");
	char string[20];//dichiara stringa
	/*fai scrivere all'utente nel file*/
	while(!fals)
	{
		printf("inserisci un prodotto\n");
		//prendi la stringa
		fgets(string,20,stdin);
		//elimina \n
		//string[strlen(string)-1]='\0';
		 if (string[strlen(string) - 1] == '\n') {
            string[strlen(string) - 1] = '\0';
        }
		//inserisci la stringa nel file
		fprintf(file, "%s\n",string );
		printf("quanti?\n");
		//prendi il num
		scanf_s("%d%*c",&num);
		//insersci il numero nel file
		fprintf(file,"Quanti= %d \n",num );
		printf("vuoi inserire un altro articolo?\n");
		printf("si->1 no->0\n");
		scanf_s("%d%*c",&fals);
	}
	fclose(file);

	return 0;
}