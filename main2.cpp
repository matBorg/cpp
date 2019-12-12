#include <iostream>
#include "libArray.h"

using namespace std;


void stampaMenu()
{
	cout << "1. Uscita" << endl;
	cout << "2. Visualizza il vettore" << endl;
	cout << "3. Aumenta del 10 percento ogni elemento del vettore " << endl;
	cout << "4. Mostra l'elemento massimo "<<endl;
	cout << "5. Mostrare quante volte è presente l'elemento minimo "<<endl;
	cout << "6. Mostrare gli elementi di indice pari "<<endl;
	cout << "7. Visualizzare il vettore, mettendo anche una descrizione a seconda del valore --> pari e dispari "<<endl;
}

void menu(int v[], int n)
{
	int scelta;
	stampaMenu();
	do
	{
		cin>>scelta;
		switch(scelta)
		{
			case 1:
				cout<<"Uscita in corso"<<endl;
			case 2:
				stampaVettore(v, n);
				break;
			case 3:
				for (int i = 0; i<n; i++){
					v[i] = v[i]+float(v[i])/10;
				}
				break;
			case 4:
				cout<<maggiore(v, n)<<endl;
				break;
			case 5:
				int a = minore(v, n);
				int risultato = 0;
				for (int i = 0; i<n; i++) {
					if (v[i] == a){
						risultato += 1;
					}
					cout<<risultato;
				}
				break;
			case 6:
				for (int i = 0; i<n; i++){
					if (v[i]%2 == 0){
						cout<<v[i];		
					}
					cout<<risultato;
				break;
			case 7:
				cout << "Stampo il vettore:" << endl;
				for (int i=0; i<n; i++){
					if (v[i]%2 == 0)
						cout << "\tElemento " << i+1 << ": " << v[i] <<" PARI"<< endl;
						}
					else {
						cout << "\tElemento " << i+1 << ": " << v[i] <<" DISPARI"<< endl;
					}
				break;
			default:
				cout << "Opzione non valida" << endl;
				break;
		}
		cout << "Scegli un comando: ";
		cin >> scelta;
	}while(scelta != 1);
}

int main()
{
	int n=10;
	int v[10];
	riempiVettoreRandom(v, n);
	menu(v, n);
}


