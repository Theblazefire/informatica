#include <string.h>
int is_num(char	c){
	return (c>='0'&&c<='9');
}
void canc(char* str,int pos){
    int j=pos;
        while(str[j]!='\0'){
        str[j]=str[j+1];
        j++;
    }
}

void funzioneStringhe2(char* str) {
	//
	int i=0;
	while(str[i]!='\0'){
		int curr=(str[i]=='1'&&str[i+1]=='2');
		if (curr)
		{
		    str[i+2]='x';
		    if(!is_num(str[i])){
		        canc(str,i);
		    }else{
		    i++;
		    }

// ***** dopo aver trovato 12, inserisce sempre x, mentre dovrebbe verificare
// ***** se str[i+2] è numerico	e verifica se str[i] è numerico (lo è sempre, vale 1) 	    
// ***** manca distinzione fra caso cancellazione e caso assegnazione -4

		}
	}
	
}
