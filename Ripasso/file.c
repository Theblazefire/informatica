/*
file
fopen("nume file", "tipo di apertura")
tipo di apertura:

 w : permette di creare un file in esistente
     e di aprirlo in scrittura
 
 w+ :  permette di creare un file in esistente
       e di aprirlo in scrittura e lettura
 
 r : permette di aprire un file in scrittura
     se non esiste restituisce NULL
 
 r+ : permette di aprire un file in scrittura
      e lettura se non esiste restituisce NULL

 a : permette di creare un file in esistente
     e di aprirlo in scrittura partendo dalla fine
     del file

 a+ : permette di creare un file in esistente
      e di aprirlo in scrittura e lettura partendo 
      dalla fine del file

 b : permette di aprire file binari si mette insieme ad altr
     cose.
     esempio:
     fopen("ciao.exe",wb)
*/
#include <stdio.h>
int main()
{
	FILE* file=fopen("test1.txt","w+");
	fprintf(file, "ciao mondo! :)(\n");
	fclose(file);
	return 0;
}