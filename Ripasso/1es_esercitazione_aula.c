/*
crea una applicazione che stampa
tutti i numeri pari da x a y se 
nell'intervallo ci sono numeri
guali alla sommma fra x e y
stamppare un messaggio che lo dice

Specifica
input x e y
pre+condizione x e y app Z
output (x,x2/2... y)
post-condizione (x,x2/2... y) app Z se esiste
un numero dell'insieme (x,x2/2... y) che è
uguale alla somma fra x e y stampare un messaggio 
*/
#include <stdio.h>
int insieme(int num)
{
		return num%2==0;	
}//end insieme
int main() //funz principale
{
	//input
	printf("creo un insieme composto solo da numeri pari\n");
    printf("inserire il minomo\n");
    int min;
    scanf_s("%d",&min);
    printf("inserire il massimo\n");
    int max;
    scanf_s("%d",&max);
    //dichiarazione varibile di esistenza
    int q=0;
    //somma min e max inseriti
    int som=min+max;
    //forma l'insieme dal minimo al massimo
    for (int i = min; i <= max && !q; ++i)
    {
    	//stampa l'insieme pari
    	if(insieme(i))
    	{
    	 printf("%d ",i );
    	 //verifica se un elemento dell'insieme
    	 //è uguale alla somma del min e del massimo 
    	  if (i==som)
    	  {
    	 	 q=1;
    		 printf("%d =min+max\n", i);
    	  }//if2
    	}//if1
    }
    printf("fine del programma\n");
}// end main




