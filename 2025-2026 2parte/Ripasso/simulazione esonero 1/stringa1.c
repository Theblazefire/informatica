/*
ESERCIZIO STRINGHE 1
Realizzare una funzione primaLeAPoiLeZ che riceve come parametro una stringa e la modifica
riordinando i caratteri della stringa così che tutte le ‘a’ (minuscole) compaiono all’inizio della
stringa e tutte le ‘z’ (minuscole) compaiono alla fine della stringa. Caratteri diversi da ‘a’ e ‘z’
possono apparire in un ordine qualsiasi (comunque dopo le ‘a’ e prima delle ‘z’). Ad esempio,
se la stringa parametro è "az56Aazza8", allora "aaa56A8zzz" rappresenta una possibile
modifica corretta della stringa.
*/

/*
#include <stdio.h>
#include <string.h>

har* str) {
    int n = strlen(str);
    char temp[100];
    int pos = 0;
    
    // Prima fase: copia tutte le 'a' all'inizio
    for (int i = 0; i < n; i++) {
        if (str[i] == 'a') {
            temp[pos] = 'a';
            pos++;
        }
    }
    
    // Seconda fase: copia tutti i caratteri che non sono 'a' né 'z'
    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'z') {
            temp[pos] = str[i];
            pos++;
        }
    }
    
    // Terza fase: copia tutte le 'z' alla fine
    for (int i = 0; i < n; i++) {
        if (str[i] == 'z') {
            temp[pos] = 'z';
            pos++;
        }
    }
    
    // Termina la stringa
    temp[pos] = '\0';
    
    // Copia il risultato nella stringa originale
    strcpy(str, temp);
}

int main() {
    char stringa[100];
    
    printf("Inserisci la stringa: ");
    fgets(stringa, 100, stdin);
    
    // Rimuovi il carattere newline se presente
    if (stringa[strlen(stringa) - 1] == '\n') {
        stringa[strlen(stringa) - 1] = '\0';
    }
    
    printf("Stringa originale: %s\n", stringa);
    
    primaLeAPoiLeZ(stringa);
    
    printf("Stringa modificata: %s\n", stringa);
    
    return 0;
}
*/
#include <stdio.h>
#include <string.h>
int trova_a(char* str,int pos){
	int j=pos;
	return (str[j]=='a');
}
int trova_z(char* str,int pos){
	int j=pos;
	return (str[j]=='z');
}

void primaLeAPoiLeZ(char* str){
	int n=strlen(str);
	int lim_pos=0;
	char temp[100];
	for (int i = 0; i < n; i++)
	{
		if (trova_a(str,i))
		{
			temp[lim_pos]='a';
			lim_pos++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if(!trova_a(str,i)&&!trova_z(str,i)){
			temp[lim_pos]=str[i];
			lim_pos++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if(trova_z(str,i)){
			temp[lim_pos]='z';
			lim_pos++;
		}
	}
	temp[lim_pos]='\0';
	strcpy(str,temp);
}
	
int main(){
	char stringa[50];
	printf("dammi la stringa\n");
	fgets(stringa,50,stdin);
	stringa[strlen(stringa)-1]='\0';
	primaLeAPoiLeZ(stringa);
	printf("%s\n",stringa );
	return 0;
}