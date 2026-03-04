char funzioneStringhe1(char* str){
	int i=0;
	int max;
	int n=strlen(str);
	if (n==0)
	{
		return '\0';
	}

// ****** inizializzazione max mancante -1

	while(str[i]!='\0'){
		int num= str[i]-'0';
		if (max<num)
		{
			max=num;
		}
		i++;
	}

// ****** manca controllo carattere alfabetico -1,5

	char c=max+'0';
	return c;
}