#include <stdio.h>
#include <stdlib.h>
void CalcolaResto(int* n1,int* n2,int* resto)
{
	*resto= *n1 % (*n2);
	printf("Resto= %d\n", *resto);
}
void quoziente(int* divd, int* divs,int* quoz)
{
	*quoz=*divd / (*divs);
	printf("Quoziente %d\n", *quoz);
}
void ordina(int* n1,int* n2)
{
	if (*n2>*n1)
	{
		int min=*n1;
		*n1=*n2;
		*n2=min;
	}

}
void input(int* n1,int* n2)
{
	printf("insersci un numero\n");
	scanf_s("%d",n1);
	printf("insersci un numero\n");
	scanf_s("%d",n2);
	//printf("%d %d\n",*n1,*n2 );
}
int* AllocaMemoria()//Memoria tipo intera
{
	int* memo= malloc(sizeof(int));
	return memo;

}
int main()//funzione principale
{
	/*imput*/
	int* num1=AllocaMemoria();
	int* num2=AllocaMemoria();
	int* resto=AllocaMemoria();
	int* quoz=AllocaMemoria();
	printf("svolgo la divisione\n");
	/*prendi i numeri*/
	input(num1,num2);
	/*riordina i valori inseriti*/
	ordina(num1,num2);
	/*svolgi la divisione*/
	quoziente(num1,num2,quoz);
	/*Ricava il resto*/
	CalcolaResto(num1,num2,resto);
	/*pulisci memoria*/
	free(num1);
	free(num2);
	free(quoz);
	free(resto);
}