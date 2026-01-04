/*
(7 pt) Una funzione sommaDueNumerici riceve come parametro una stringa e la modifica 
rimpiazzando ogni sequenza (massimale) di esattamente due caratteri numerici adiacenti nella stringa 
con la somma dei numeri corrispondenti ai caratteri. Ad esempio, se la stringa ricevuta come 
parametro è "xx13xxx74xx784xx00xx6xx", la stringa deve essere modificata in 
"xx4xxx11xx784xx0xx6xx", in quanto 1+3=4, 7+4=11 e 0+0=0.  
*/
#include <stdio.h>
#include <string.h>


void sms(){
	printf("rispetto la proprieta' se la stringa ricevuta come parametro %c 'xx13xxx74xx784xx00xx6xx' -> 'xx4xxx11xx784xx0xx6xx'\n",138);
	printf("inserire stringa\n");
}

int is_num(char c){
	return (c>='0'&&c<='9');
}
/*
12_
_12_
__12
*/
void sommaDueNumerici(char* str){
	int n=strlen(str);
	int somN=0;
	char somC;
	int j=0;
	int cond=0;
	for (int i = 0; i < n-1; i++){
		cond=0;
		if(is_num(str[i])&&is_num(str[i+1])){
			cond=1;
			/*   ↓
				_12_
			*/
			if(i!=0){
			if(is_num(str[i-1])) cond=0;
			}

			if(i<n-2&&cond){
				if(is_num(str[i+2])) cond=0;
			}
		}else{
			cond=0;
		}


	if(cond){
		somN=(str[i]-'0')+(str[i+1]-'0');
			if(somN>=10){
				str[j++]='1';
				somN=somN-10;//togli decina
				somC=somN+'0';
				str[j++]=somC;
			}else{
					somC=somN+'0';
					str[j++]=somC;
				 }
		i++;//salta la seconda cifra
	}else{
			str[j++]=str[i];
		 }
	}

	if (j < n){
		str[j++] = str[n-1];
	}
	str[j]='\0';
}

//#############################################################################################
void sommaDueNumerici_V2(char* str){
    int n = strlen(str);
    int j = 0;  // Indice di scrittura
    
    for (int i = 0; i < n; i++){
        // Verifica se abbiamo esattamente 2 cifre consecutive (sequenza massimale)
        int prevIsDigit = (i > 0) && is_num(str[i-1]);
        int currIsDigit = is_num(str[i]);
        int nextIsDigit = (i < n-1) && is_num(str[i+1]);
        int next2IsDigit = (i < n-2) && is_num(str[i+2]);
        
        // Sequenza massimale di esattamente 2 cifre:
        // - Non deve esserci una cifra prima
        // - Devono esserci 2 cifre consecutive
        // - Non deve esserci una terza cifra dopo
        if (!prevIsDigit && currIsDigit && nextIsDigit && !next2IsDigit){
            // Somma le due cifre
            int somma = (str[i] - '0') + (str[i+1] - '0');
            
            // Gestisci somme >= 10 (due cifre)
            if (somma >= 10){
                str[j++] = '1';
                str[j++] = (somma - 10) + '0';
            } else {
                str[j++] = somma + '0';
            }
            
            i++; // Salta la seconda cifra già processata 
        } else {
            // Sovrascrittura diretta
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';  // Termina la stringa
}

//-------------------------------------------------------------------------------

void sommaDueNumerici_V2_con_while(char* str){
    int n = strlen(str);
    int i = 0;  // Indice di lettura
    int j = 0;  // Indice di scrittura
    
    while (i < n){
        // Verifica se abbiamo esattamente 2 cifre consecutive (sequenza massimale)
        int prevIsDigit = (i > 0) && is_num(str[i-1]);
        int currIsDigit = is_num(str[i]);
        int nextIsDigit = (i < n-1) && is_num(str[i+1]);
        int next2IsDigit = (i < n-2) && is_num(str[i+2]);
        
        // Sequenza massimale di esattamente 2 cifre
        if (!prevIsDigit && currIsDigit && nextIsDigit && !next2IsDigit){
            // Somma le due cifre
            int somma = (str[i] - '0') + (str[i+1] - '0');
            
            // Gestisci somme >= 10 (due cifre)
            if (somma >= 10){
                str[j++] = '1';
                str[j++] = (somma - 10) + '0';
            } else {
                str[j++] = somma + '0';
            }
            
            i += 2;  // Salta entrambe le cifre processate
        } else {
            // Sovrascrittura diretta
            str[j++] = str[i];
            i++;
        }
    }
    
    str[j] = '\0';  // Termina la stringa
}


int main(){
    char stringa[100];
    int scelta = -1;
    
    printf("=== MENU VERSIONI FUNZIONE ===\n");
    printf("1 = Prima versione\n");
    printf("2 = Seconda versione\n");
    printf("3 = Seconda versione con while\n");
    printf("0 = Esci\n");
    printf("==============================\n\n");
    
    while(scelta != 0){
        printf("Scegli versione (0-3): ");
        scanf("%d", &scelta);
        getchar();  // Consuma il '\n' lasciato da scanf
        
        if(scelta == 0){
            printf("Arrivederci!\n");
            break;
        }
        
        if(scelta < 1 || scelta > 3){
            printf("Scelta non valida! Riprova.\n\n");
            continue;
        }
        
        // Input stringa
        sms();
        fgets(stringa, 100, stdin);
        stringa[strlen(stringa)-1] = '\0';
        
        printf("Prima:  %s\n", stringa);
        
        // Esegui la versione scelta
        switch(scelta){
            case 1:
                sommaDueNumerici(stringa);
                break;
            case 2:
                sommaDueNumerici_V2(stringa);
                break;
            case 3:
                sommaDueNumerici_V2_con_while(stringa);
                break;
        }
        
        printf("Dopo:   %s\n\n", stringa);
    }
    
    return 0;
}