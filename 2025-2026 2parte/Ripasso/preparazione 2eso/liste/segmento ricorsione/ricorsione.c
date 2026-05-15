/*
	(5 pt) Una funzione ricorsiva tuttiAlternati che verifica se, in un array di numeri interi, i numeri 
positivi e negativi si alternano. Ad esempio, la funzione tuttiAlternati deve restituire il valore 1 se 
l’array parametro è [-3,6,-4,1]. Deve restituire valore 1 anche se l’array parametro è [2,-1,4].  La 
funzione tuttiAlternati ha due parametri: l’array e la sua n. Nel caso in cui si desideri 
utilizzare un terzo parametro per realizzare la ricorsione, deve essere definita un’ulteriore 
funzione tuttiAlternatiRic che ha tre parametri e che realizza la ricorsione. In tal caso la funzione 
tuttiAlternati invoca la funzione tuttiAlternatiRic.
*/
#include <stdio.h>
int tuttiAlternatiRic(int* sca,int n,int i){
	if (i>=n-2)
	{
		return 1;
	}else{
		return ((sca[i]>0&&sca[i+1]<0)||(sca[i+1]>0&&sca[i]<0))&&tuttiAlternatiRic(sca,n,i+1);
	}
}
int tuttiAlternati(int* sca,int n){
	return tuttiAlternatiRic(sca,n,0);
}
void scriviNumeri(int* sca, int n){
	FILE* fp=fopen("nomeFile.dat","wb");
	if (fp==NULL)
	{
		printf("spazio insufficente per aprire il file\n");
	}else{
		fwrite(sca,sizeof(int),n,fp);//scrive fino ad arrivare a n;
	}
	fclose(fp);
}

int  quantiNumeri(){
	int count=0;
	FILE* fp=fopen("nomeFile.dat","rb");
	if (fp==NULL)
	{
		printf("file non trovato\n");
	}else{
		int prendi;//	|-prendo l'elemento per imagazinarlo
		//              |                  |-prendo dal file
		while(fread(&prendi,sizeof(int),1,fp)){
			count++;
		}		
		fclose(fp);//se è stato aperto lo chiudo
	}
	return count;
}
int  leggiNumeri(int* sca,int n){
	FILE* fp=fopen("nomeFile.dat","rb");
	if (fp==NULL)
	{
		printf("file non trovato\n");
	}else{
		fread(sca,sizeof(int),n,fp);//fread legge in maniera ciclica fino a n
		fclose(fp);
	}
}

/* funzione principale */
int main() {
    int n;      //  n dell'array
    int scelta;             //  scelta dell'utente

    /* acquisizione dati e lettura dell'array da input */
    printf("Vuoi introdurre una nuova sequenza (premi 1) oppure recuperarla da file (premi 2)? ");
    scanf("%d",&scelta);

    /* introduzione sequenza da input */
    if(scelta==1) {
        /* determina la n della sequenza */
        printf("Introduci la n della sequenza: ");
        scanf("%d",&n);

        /* crea l'array e leggine i valori degli elementi */
        int array[n];
        printf("Scrivi %d elementi \n",n);
        for(int i=0;i<n;i++)
            scanf("%d",&array[i]);

        /* invoca la funzione ricorsiva e stampa il risultato */
        if(tuttiAlternati(array,n))
            printf("verificato\n");
        else
            printf("Non verificato\n");

        /* salva la sequenza su file */
        scriviNumeri(array,n);
    }
    /* recupero sequenza da file */
    else {
        /* determina la n della sequenza */
        n = quantiNumeri();

        /* crea l'array e leggine i valori degli elementi da file */
        int array[n];
        leggiNumeri(array,n);
        printf("Ecco la sequenza recuperata\n");
        for(int i=0;i<n;i++)
            printf("%d ", array[i]);
        printf("\n");

        /* invoca la funzione ricorsiva e stampa il risultato */
        if(tuttiAlternati(array,n))
            printf("alternato\n");
        else
            printf("non alternato\n");

        /* salva la sequenza su file */
        scriviNumeri(array,n);
    }
}