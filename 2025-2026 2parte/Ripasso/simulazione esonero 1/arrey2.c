/*
ESERCIZIO ARRAY 2
Descrizione del problema
Si vuole progettare un algoritmo per risolvere il seguente problema. Data una sequenza di
interi, verificare se esiste una tripla di interi (non necessariamente consecutivi) nella sequenza
che contiene almeno due interi pari ed almeno due interi maggiori di 10. Ad esempio, la
sequenza [11, 4, -12, 8, 12] è un’istanza positiva del problema, in quanto la tripla [11, 4, 12]
contiene almeno due interi pari ed almeno due interi maggiori di 10.
Task
• Descrivere in modo sintetico la specifica del problema.
• Indicare di che tipo di problema si tratta (accumulazione, conteggio, verifica
esistenziale, verifica universale, minimo/massimo).
• Descrivere un algoritmo risolutivo per il problema utilizzando un diagramma a blocchi.
• Realizzare una funzione C pariGrandi con parametri: 1) un riferimento ad un array di
interi; e 2) un intero che rappresenta la lunghezza dell’array. La funzione restituisce 1 se
esiste una tripla di interi nella sequenza che contiene almeno due interi pari ed almeno
due interi maggiori di 10, restituisce 0 altrimenti.

*/

/*SPECIFICA
INTPUT: arrey con n elementi
pre-condizione: n>=3 con elementi interi
OUTPUT: ver
post-condizione:  ver = 1 indica l'istanza positiva se esiste una tripla di interi (non necessariamente consecutivi) nella sequenza
che contiene almeno due interi pari ed almeno due interi maggiori di 10. altrimenti ver = 0 indica l'istanza negativa
*/

#include <stdio.h>
int Soluzione_claud(int* sca, int n){
    int i, j, k;
    int ver = 0;
    
    // Tre cicli annidati per generare tutte le possibili triple
    i = 0;
    while(i < n-2 && !ver){
        j = i + 1;
        while(j < n-1 && !ver){
            k = j + 1;
            while(k < n && !ver){
                int prim_num = sca[i];
                int sec_num = sca[j];
                int terz_num = sca[k];
                
                // Conta quanti numeri pari e quanti maggiori di 10
                int contaPari = 0;
                int contaMaggiori10 = 0;
                
                if(prim_num % 2 == 0) contaPari++;
                if(prim_num > 10) contaMaggiori10++;
                
                if(sec_num % 2 == 0) contaPari++;
                if(sec_num > 10) contaMaggiori10++;
                
                if(terz_num % 2 == 0) contaPari++;
                if(terz_num > 10) contaMaggiori10++;
                
                // Verifica se ci sono almeno 2 pari E almeno 2 maggiori di 10
                if(contaPari >= 2 && contaMaggiori10 >= 2){
                    ver = 1;
                }
                
                k++;
            }
            j++;
        }
        i++;
    }
    
    return ver;
}

int pariGrandi(int* sca,int n){

}
int main(){
	printf("ciao sono un programma che verifica se in una tripla contiene almeno due elementi pari e due maggiori di 10\n");
	printf("inserisci quantita' dei elementi\n");
	int n;
	scanf("%d",&n);
if(n<3){
		printf("posso accetare una quantita almeno di 3 elementi");
	}else{
		int sca[n];
		for (int i = 0; i < n; i++)
		{
			printf("inserisci %d%c elemento\n",i+1,167 );
			scanf("%d",&sca[i]);
		}
		
	if(pariGrandi(sca,n)){
		printf("ho verificato che esistono due pari e due elementi maggiori di 10 :)\n");
	}else{
		printf("ho verificato che non esistono due pari e due elementi maggiori di 10 :(\n");
	}
}	
	return 0;
}