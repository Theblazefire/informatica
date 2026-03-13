#include <stdio.h>
int verifica(int*sca,int n,int i){
	int ris;
	if (i>=n-2)
	{
		ris=1;
	}else{
		ris=((sca[i]!=sca[i+1])&&(sca[i]!=sca[i+2])&&(sca[i+1]!=sca[i+2])
			)&&verifica(sca,n,i+1);
	}
	return ris;
}
int triplatuttidiversi(int*sca,int n){
	if(n<=2){
		printf("serve minimo una tripla\n");
		return 0;
	}
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
	if(triplatuttidiversi(scatola,n)){
		printf(":)\n");
	}else{
		printf(":(\n");
	}
	return 0;
}