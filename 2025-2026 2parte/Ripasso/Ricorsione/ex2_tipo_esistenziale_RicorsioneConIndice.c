#include <stdio.h>
int verifica(int* sca,int n,int i){
	int ris;
	if (i>=n-1)
	{//2 4 7 8
		ris=0;
	}else{
		ris=((sca[i]==sca[i+1]*sca[i+1])||(sca[i+1]==sca[i]*sca[i])
			)||verifica(sca,n,i+1);
	}
	return ris;
}

int QuadratoPrecSucc(int* sca,int n){
	return verifica(sca,n,0);
}

int main(){
	printf("Inserisci lunghezza Arrey\n");
	int n;
	scanf("%d",&n);
	int scatola[n];
	for (int i = 0; i < n; i++)
	{
		printf("inserisci %d° elemento\n",i+1 );
		scanf("%d",&scatola[i]);
	}
	if(QuadratoPrecSucc(scatola,n)){
		printf(":)\n");
	}else{
		printf(":(\n");
	}
	return 0;
}