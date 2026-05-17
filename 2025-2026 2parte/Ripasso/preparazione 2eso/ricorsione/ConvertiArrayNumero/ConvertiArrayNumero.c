/*
Esercizio 4 (ConvertiArrayNumero) Scrivere un programma 
che prende in input un array non nullo e non vuoto di 
interi e che restituisce in output a un intero composto 
dalle cifre dell’array: la cifra più significativa 
corrisponde all'indice 0 dell'array. 
Utilizzare una funzione ricorsiva. Esempio: {1,2,3} -> 123
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int baseDieci(int a,int grado){
	return a * (int)pow(10,grado);
}
int ConvertiArrayNumeroRic(int* arr,int n,int i,int num){
	if (i==n)
	{
		return num;
	}else{
		return num=baseDieci(arr[i],n-1+i)+ConvertiArrayNumeroRic(arr,n,i+1,num);
	}
}//non serve num

//versione dove serve num

int ric(int* arr,int n,int i,int num){
	if (i==n)
	{
		return num;
	}else{
		num=(num*10)+arr[i];
	}
}


int ConvertiArrayNumero(int* arr, int n){
	int num=0;
	return ConvertiArrayNumeroRic(arr,n,0,num);
}