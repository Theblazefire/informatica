//verifica se esiste elemento pari a quadrato di vicino
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
				    (sca[i+2]!=sca[i]) )&&verifica(sca,n,i+1);

	}
}
int quadratiPrecSucc1(int* sca,int n){
	return verifica(sca,n,0);
}

//ricorsione tipo 1
int quadratiPrecSucc(int* sca,int n){
	int risultato;
	if (n<=1)
	{//tipo di ex esistenziale
		risultato=0;//da ricorda (fare un botto di esercizi)
	}else{
		risultato=( (sca[n-1]==sca[n-2]*sca[n-2])||
					(sca[n-2]==sca[n-1]*sca[n-1]) )||quadratiPrecSucc(sca,n-1);
	}
	return risultato;
}
//ricorsione tipo 1 caso base implicita

//ricorsione tipo 1
int quadratiPrecSucc(int* sca,int n){
	int risultato=0;
	if (n>=2){
		risultato=( (sca[n-1]==sca[n-2]*sca[n-2])||
					(sca[n-2]==sca[n-1]*sca[n-1]) )||quadratiPrecSucc(sca,n-1);
	}
	return risultato;
}

//ricorsione tipo 2
int quadratiPrecSucc2(int* sca,int n){
	int risultato;
	if (n<=2)
	{//tipo di ex esistenziale
		risultato=1;
	}else{
		risultato=( (sca[0]!=sca[1])&&
				    (sca[0]!=sca[2])&&
				    (sca[1]!=sca[2]) )&&quadratiPrecSucc2(sca+1,n-1);
	}//													^inizio	^fine			
	//		si sposta l'indirizzo tramite l'artiemtica dei puntattori e si diminuisce la lunghezza		
	return risultato;
}
int main()
{
	
	return 0;
}