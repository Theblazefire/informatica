#include <stdio.h>
int fattoriale(int n)
{
	int cont=1;//variabile accomulativa
	for (int i = 1; i <= n; ++i)
	{
		cont=cont*i;
	}
	return cont;

}
//funzione ricorsiva per svolgere il prodotto
int prodotoddo(int n1,int n2)
{
	int risult;
	if (n2==0)
	{//passo base 1 4 5 8
		risult=0;
	}
	else
	{//passo ricorsivo 
		risult=n1+prodotoddo(n1,n2-1);
	}

	return risult;

}
int main()
{
	printf("inserisci numero ti faccio il fattoriale\n");
	int n;
	scanf_s("%d",&n);
	int num=fattoriale(n);
	printf("il fattoriale di %d! = %d\n",n,num );

	printf("dammi due numeri e li moltiplico fra loro\n");
	printf("numero 1\n");
	int n1;
	scanf_s("%d",&n1);
	printf("numero 2\n");
	int n2;
	scanf_s("%d",&n2);
	int risultato=prodotoddo(n1,n2);
	printf("%d x %d = %d\n",n1,n2,risultato );
	return 0;
}