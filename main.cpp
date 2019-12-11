#include <iostream>
#include "lib.h"

using namespace std;


void stampaMenu(){
	cout<<"0. USCITA "<<endl;
	cout<<"1. CREAZIONE RANDOM DEL VETTORE "<<endl;
	cout<<"2. STAMPA VETTORE "<<endl;
	cout<<"3. AGGIUNGI ELEMENTO "<<endl;
	cout<<"4. VISUALIZZA MASSIMO E MINIMO "<<endl;
	cout<<""<<endl;
	
	
}
void menu(int v[], int n){
	int scelta, c;
	do {
		stampaMenu();
		cout<<"INSERISCI SCELTA ";
		cin>>scelta;
		switch(scelta){
			case 0:
				break;
		default:
			cout<<"OPZIONE NON VALIDA ";
		}
		
	} 
	
}
int main(){
	int n = 100000;
	int v[n];
	setDimensioneMax(n);
	setRandomMin(1);
	setRandomMax(10);
	menu(v, n);
	
	
	
}
