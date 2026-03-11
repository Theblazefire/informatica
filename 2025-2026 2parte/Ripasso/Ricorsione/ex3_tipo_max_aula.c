#include <stdio.h>
//ricorsione tipo 1
int sommaMax(int* sca,int n){
	//pre cond n>=3
	int risultato;
	if (n==3)
	{//tipo di ex esistenziale
		risultato=sca[0]+sca[1]+sca[2];//da ricorda (fare un botto di esercizi)
	}else{
		int som=sca[0]+sca[1]+sca[2];
		int sommaRic=sommaMax(sca+1,sca-1);
		if (som>sommaRic)
		{
			risultato=sca[0]+sca[1]+sca[2];
		}else{
			risultato=sommaRic;
		}
		
	}
	return risultato;
}