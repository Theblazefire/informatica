/*
Esame 13 settembre
Realizzare un'applicazione TriplaSommaMassima definita come segue.
L’applicazione contiene una funzione ricorsiva triplaSommaMassima 
che determina, all’interno di un array di interi ricevuto come 
parametro, la massima somma di tre interi adiacenti nell’array. 
Ad esempio, l’istanza [4, -2, 5, 7, -1, -2] 
del problema ha soluzione 11, in quanto fra 
le triple di interi adiacenti nell’array 
(ovvero [4, -2, 5], [-2, 5, 7], [5, 7, -1], 
[7, -1, -2]) quella che ha somma massima 
	1,rf(ovvero [5, 7, -1]) ha somma 11. 

*/
#include <stdio.h>

void triplaSommaMass
ima()