#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *Opf= fopen("Ciaooo.txt","w");//crea il file se non esiste
    fprintf(Opf,"ciao mondo questa frase è denhtro il file");//scrivi nel file
    //       ^ nome del puntatore che punta al file creato dalla funzione fopen
    fclose(Opf);
    return 0;
}