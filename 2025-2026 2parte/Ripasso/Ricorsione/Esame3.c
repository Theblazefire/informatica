/*
Esame 3 Luglio
Realizzare un'applicazione 
TripleTuttiDiversi definita 
come segue.L’applicazione 
contiene una funzione ricorsiva 
tripleTuttiDiversi che verifica, 
all’interno di un array di interi 
ricevuto come parametro, se ogni 
tripla di interi adiacenti nell’array 
è composta da interi tutti diversi fra 
loro. Ad esempio, [1, 5, 6, 7, 5, 1] 
è un’istanza positiva del problema, 
in quanto ciascuna delle triple 
[1, 5, 6], [5, 6, 7], [6, 7, 5], 
e [7, 5, 1] è composta da tre interi fra loro diversi.
*/
#include <stdio.h>
int verifica(int* sca,int n,int i){
	int ris=1;
	if(i+2==n){
		ris= 1;
	}else{
		ris=(	(sca[i]!=sca[i+1])&&(sca[i]!=sca[i+2])&&
				(sca[i+1]!=sca[i+2])
			)&&verifica(sca,n,i+1);
	}
	return ris;
}
int tripleTuttiDiversi(int* sca,int n){
	return verifica(sca,n,0);
}

/*int main(){
	printf("inserisci lunghezza\n");
	int n;
	scanf("%d",&n);
	int scatola[n];
	for (int i = 0; i < n;i++)
	{
		printf("inserisci numero %d\n",i+1 );
		scanf("%d",&scatola[i]);
	}
	if (tripleTuttiDiversi(scatola,n))
	{
		printf(":)\n");
	}else{
		printf(":(\n");
	}
	return 0;
}*/

int main(void) {
    printf("=== Applicazione TripleTuttiDiversi in C ===\n\n");

    int array1[] = {1, 5, 6, 7, 5, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    printf("Test Case 1:\n");
    printf("Array: [1, 5, 6, 7, 5, 1]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array1, n1) ? "TRUE ✓" : "FALSE ✗");

    int array2[] = {1, 5, 6, 7, 7, 1};
    int n2 = sizeof(array2) / sizeof(array2[0]);
    printf("Test Case 2:\n");
    printf("Array: [1, 5, 6, 7, 7, 1]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array2, n2) ? "TRUE ✓" : "FALSE ✗");

    int array3[] = {1, 5, 6, 7, 8, 9};
    int n3 = sizeof(array3) / sizeof(array3[0]);
    printf("Test Case 3:\n");
    printf("Array: [1, 5, 6, 7, 8, 9]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array3, n3) ? "TRUE ✓" : "FALSE ✗");

    int array4[] = {1, 5, 6, 7, 6, 9};
    int n4 = sizeof(array4) / sizeof(array4[0]);
    printf("Test Case 4:\n");
    printf("Array: [1, 5, 6, 7, 6, 9]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array4, n4) ? "TRUE ✓" : "FALSE ✗");

    int array5[] = {1, 2};
    int n5 = sizeof(array5) / sizeof(array5[0]);
    printf("Test Case 5:\n");
    printf("Array: [1, 2]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array5, n5) ? "TRUE ✓" : "FALSE ✗");

    int array6[] = {5, 5, 5, 5};
    int n6 = sizeof(array6) / sizeof(array6[0]);
    printf("Test Case 6:\n");
    printf("Array: [5, 5, 5, 5]\n");
    printf("Risultato: %s\n\n", tripleTuttiDiversi(array6, n6) ? "TRUE ✓" : "FALSE ✗");

    return 0;
}