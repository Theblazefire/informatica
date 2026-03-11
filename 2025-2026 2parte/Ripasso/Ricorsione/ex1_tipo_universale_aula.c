#include <stdio.h>
//ricorsione con indice
int verifica(int* sca,int n,int i){
	int ris;
	if (i>=n-2)//da ricordare
	{
		ris=1;
	}else{
		ris=( (sca[i]!=sca[i+1])&&
				    (sca[i+1]!=sca[i+2])&&
				    (sca[i+2]!=sca[i]) )&&tripletuttidiv(sca,n,i+1);

	}
}
int tripletuttidiv1(int* sca,int n){
	return verifica(sca,n,0);
}

//ricorsione tipo 1
int tripletuttidiv(int* sca,int n){
	int risultato;
	if (n<=2)
	{//tipo di ex universale
		risultato=1;
	}else{
		risultato=( (sca[n-1]!=sca[n-2])&&
				    (sca[n-1]!=sca[n-3])&&
				    (sca[n-3]!=sca[n-2]) )&&tripletuttidiv(sca,n-1);
	}
	return risultato;
}
//ricorsione tipo 2
int tripletuttidiv2(int* sca,int n){
	int risultato;
	if (n<=2)
	{//tipo di ex universale
		risultato=1;
	}else{
		risultato=( (sca[0]!=sca[1])&&
				    (sca[0]!=sca[2])&&
				    (sca[1]!=sca[2]) )&&tripletuttidiv2(sca+1,n-1);
	}//													^inizio	^fine			
	//		si sposta l'indirizzo tramite l'artiemtica dei puntattori e si diminuisce la lunghezza		
	return risultato;
}
int main()
{
	
	return 0;
}