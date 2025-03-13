#include <stdio.h>
	int tuttipari(int sca[],int l)
	{//pre: l>=0 l è la lunghezza di una sequenza
		int res;
		/*caso base*/  //il caso baso e dove arrivera dopo la decrementazione il programma, la decrementazione serve a portare lultima condizione fino alla prima in generale
		if(l==0)
		{
		 ris=1;	
		}//Passo ricorsivo
		else
		{
		ris= (sca[l-1]%2==0)&&tuttipari(sca,l-1);
		}
		return ris;
	}
//secondo metodo
	int tuttiRic(int* sca,int i,int l)
	{
		if (i>=l)
		{
			ris=1;_
		}
		else
		{
		ris=(sca[i]%==0) && tuttiRic(sca,i+1,l)
		}
	}
	
	int tuttipari2(int* sca,int l)
	{
			return tuttiRic(sca,0,l);
	} 

int main()
{
	
	}
