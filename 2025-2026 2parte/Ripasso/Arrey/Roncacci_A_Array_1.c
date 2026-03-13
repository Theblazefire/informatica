//*** TOTALE 5.5

int funzioneArray1(int* sca,int n){
	int i=0;
	int ver=1;
	int som=0;

	while(i<n-2&&ver){

		int prim=sca[i]%2==0;
		int sec=sca[i+1]%2==0;
		int terz=sca[i+2]%2==0;

		if ((prim&&sec)||(prim&&terz)||(terz&&sec))
		{
			if ((prim&&sec))
			{
				som=sca[i]+sca[i+1];
				if (som%7!=0&&ver)    
				{
					ver=0; //*** così le altre combinazioni risulteranno false! -1.5
				}
			}
			som=0; //*** non serve
			if ((prim&&terz))
			{
				som=sca[i]+sca[i+2];
				if (som%7!=0&&ver)
				{
					ver=0;
				}
			}
			som=0;
			if ((sec&&terz))
			{
				som=sca[i+1]+sca[i+2];
				if (som%7!=0&&ver)
				{
					ver=0;
				}
			}
		}

		i++;
	}
	return ver;
}