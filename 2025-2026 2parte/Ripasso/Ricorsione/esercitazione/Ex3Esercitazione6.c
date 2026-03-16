/*
Realizzare una funzione sumBetween 
che calcola in maniera ricorsiva 
la somma di tutti i numeri compresi 
fra i due parametri interi n e m. 
Ad esempio, se n=3 e m=7, sumBetween(3,7)=25. 
Se n=4 e m=-3, sumBetween(4,-3)=4

3 7
*/
#include <stdlib.h>
#include <stdio.h>
int verifica(int max,int min,int i){
	int ver;
	if(i==max)
	{
		ver=max;
	}else{
		ver=i+verifica(max,min,i+1);
	}
	return ver;
}
int sumBetween(int n1,int n2){
	if(n1>n2){
		return verifica(n2,n1,n1); 	
	}else{
		return verifica(n1,n2,n2);
	}
}
int main(){
	int n1;
	int n2;
	printf("inserisci il primo elemento\n");
	scanf("%d",&n1);
	printf("inserisci il secondo elemento\n");
	scanf("%d",&n2);
	printf("ho trovato%d",sumBetween(n1,n2));
	return 0;
}