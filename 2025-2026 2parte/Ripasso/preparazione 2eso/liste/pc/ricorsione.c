/*
Realizzare un'applicazione EsattamenteUnoPariGrande definita come segue. 
(4pt) L’applicazione contiene una funzione ricorsiva esattamenteUnoPariGrande che verifica, 
all’interno di un array di interi ricevuto come parametro, 
se ogni tripla di interi adiacenti nell’array contiene 
almeno due interi maggiori o uguali a 10, di cui 
esattamente uno pari. 

Ad esempio, [12, 16, 15] è un’istanza positiva del problema, 
in quanto l’unica tripla [12, 16, 15] contiene due interi maggiori 
o uguali a 10 (12 e 15) di cui esattamente uno (12) pari. 
Invece [12, 16, 7] è un’istanza negativa del problema, 
in quanto la tripla [12, 16, 7] non contiene due interi 
che siano entrambi maggiori di 10 e dei quali esattamente uno sia pari. 

La funzione esattamenteUnoPariGrande ha due parametri: l’array e la sua lunghezza. 
Nel caso in cui si desideri utilizzare un terzo parametro 
per realizzare la ricorsione, deve essere definita un’ulteriore funzione 
esattamenteUnoPariGrandeRic che ha tre parametri e che realizza la ricorsione. 
In tal caso la funzione esattamenteUnoPariGrande invoca 
la funzione esattamenteUnoPariGrandeRic (fornendole opportuni parametri) 
per calcolare il risultato. 

(0 pt) L’applicazione contiene una funzione main che gestisce l’interazione con l’utente. La funzione main è già stata implementata in un file ricorsione.c il cui codice può essere scaricato e copiato da moodle.
*/
int esattamenteUnoPariGrandeRic(int* sca,int n,int i){
	if(i>=n-2)
	{
		return 1;
	}
	int CP_Dieci=0;//pari
	int CD_Dieci=0;//disparu
	for (int j = i; j <i+3 ; j++)
	{
		if (sca[j]>=10)
		{
			if (sca[j]%2==0)
			{
				CP_Dieci++;
			}else{
				CD_Dieci++;
			}
		}
	}
		int totale_grandi = CP_Dieci + CD_Dieci;
    	return (totale_grandi >= 2 && CP_Dieci == 1)&& esattamenteUnoPariGrandeRic(sca, n, i + 1);
 }

int esattamenteUnoPariGrande(int* sca; int n){
	return esattamenteUnoPariGrandeRic(sca,n,0);
}	
int main(){
	///da fare
}