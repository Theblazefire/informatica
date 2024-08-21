/*
realizare una funz. che calcola mcd
fra due numeri 
specifica
dati in gresso x,y
pre-condizione x,y app Z
output N app Z
post-condizione N= mcd(x,y)
*/
#include <stdio.h>
int mcd(int Nx, int Ny)//Nx e Ny sono parametri Formali
{
	int Nbasso;//variabile (locale) che rapresenta il numero più piccolo
	//trova il numero più piccolo
	if (Nx>Ny)
	{
		Nbasso=Ny;
	}
	else
	{
		Nbasso=Nx;
	}
	//diminusci il numero Nbasso finche la condizione nel while sia false
	while(Nx%Nbasso!=0 || Ny%Nbasso!=0)
	{
		Nbasso--;
	}
	return Nbasso ;//restituisci numero basso
}//end FunzMcd
int main ()//funzione principale
{//input
	printf("inserisci due numeri\n calcolo Mcd\n");
    printf("inserisci il primo numero\n");
    int x;
    scanf_s("%d",&x);
    printf("inserisci il secondo numero\n");
    int y;
    scanf_s("%d",&y);
    int N=mcd(x,y);//evocazione della funz inseriti parametri attuali
    //output
    printf("Mcd = %d \n",N );
}//end main