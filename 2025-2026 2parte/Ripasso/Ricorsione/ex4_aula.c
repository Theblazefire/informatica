#include <stdio.h>
float polinomio(float* sca,int n, float x){
//pre: n>=0
	float valore;
	if (n==0)
	{
		valore=sca[0];
	}else{
		valore=sca[0]+x*(polinomio(sca+1,n-1,x));
	}
	return valore;
}
int main()
{
	int grado;
	printf("Che grado ha il tuo polinimio\n");
	scanf("%d",&grado);
	float coefficiente[grado+1]//coefficiente grado più basso
	for (int i = 0; i < gradi; i++)
	{
		printf("dammi il coefficiente del termine di grado %d\n",i);
		scanf("%f",&coefficiente[i]);
	}
	float x;
	printf("dammi il valore di x: ");
	scanf("%f",&x);

	return 0;
}