/*
Realizzare una funzione differenzaMassima 
che calcola in maniera ricorsiva, 
in un array di numeri interi,  la massima differenza 
fra due numeri adiacenti nella sequenza.
*/
#include <stdio.h>
#include <stdlib.h>
int diff(int n1,int n2){
	return (n1>n2)?(n1-n2):(n2-n1);
}
int verifica(int* sca,int n, int i){
	int CasoAttuale;
	int CasoResto;
	if (i==n-2)
	{
		return diff(sca[i],sca[i+1]);
	}else{
		CasoAttuale=diff(sca[i],sca[i+1]);
		CasoResto=verifica(sca,n,i+1);
	}
	return (CasoAttuale>CasoResto)?(CasoAttuale):(CasoResto);
}
int differenzaMassima(int* sca,int n){
	return verifica(sca,n,0);
}
int main(){
	int n;
	int* scatola;
	FILE* fp;
	//input
	printf("ciao sono un programma che trova il max fra una differenza\ndi due elementi consecuitivi di un Arrey");
	printf("inserisci lunghezza\n");
	scanf("%d",&n);
	scatola=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		printf("inserisci elemento %d\n",i);
		scanf("%d",&scatola[i]);
	}
	//output
	printf("il Max: %d\n", differenzaMassima(scatola,n));
	//file
	fp=fopen("input.txt","w");
		fprintf(fp, "il Max:%d\n",differenzaMassima(scatola,n) );
		fprintf(fp, "elementi della sequenza\n" );
		for (int i = 0; i < n; i++)
		{
			fprintf(fp,"%d ",scatola[i]);
		}
	fclose(fp);
	free(scatola);
	return 0;
}