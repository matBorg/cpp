#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//costanti
const int VALORE_MIN = -100;
const int VALORE_MAX = 100;
bool b = false;
int random_min = 0;
int random_max = 100;
int dim_max = 1000;
bool inverso = false;


//Gestione random: 
	int randomNM(int n, int m);
	float randomNM_float(int n, int m);
	int random0N(int n);
	float randomNM_float(int n);
	void setRandomMin(int min);
	void setRandomMax(int max);
//Gestione vettore:
	void setDimensioneMax(int x)
	void riempiVettore(int v[], int n);
	void riempiVettore(float v[], int n);
	void riempiVettoreRandom(int v[], int n);
	void riempiVettoreRandom(float v[], int n);
	bool aggiungiElemento(int v[], int n);
	bool aggiungiElemento(float v[], int n);
	bool rimuoviElemento(int v[], int n, int pos);
	bool rimuoviElemento(float v[], int n, int pos);
//Algoritmi array:
	void ordinamentoIngenuo(int v[], int n, bool inverso);
	void ordinamentoIngenuo(int v[], int n, bool inverso);	
	void bubbleSort(int v[], int n, bool inverso);
	void bubbleSort(float v[], int n, bool inverso);
//Funzioni su array:
	float media(int v[], int n);
	float media(float v[], int n);
	float sommaVettore(float v[], int n);
	int sommaVettore(int v[], int n);
	void inverti(int v[], int n);
	void inverti(float v[], int n);
	bool ricercaBinaria(int v[], int n, int x);
	bool ricercaBinaria(float v[], int n, int x);
	int presente(int v[], int n, int x);
	int presente(float v[], int n, float x);
	int minore(int v[], int n)
	float minore(float v[], int n)
	int maggiore(int v[], int n)
	float maggiore(float v[], int n)
	int posizioneMinore(int v[], int n)
	int posizioneMinore(float v[], int n)
	int posizioneMaggiore(int v[], int n)
	int posizioneMaggiore(float v[], int n)

//funzione a caso
void inserisciNumerosita(int &n){
	do
	{
		cout << "Inserisci numerosita: ";
		cin >> n;
	} while (n <= 0 || n > 100);
}

//Gestione random 
int randomNM(int n, int m)
{
	int valoreRandom = rand() % (m - n + 1) + n;
	return valoreRandom;
}
float randomNM_float(int n, int m){
	float a = randomNM(n, m);
	float b = (randomNM(n, m-1));;
	return a+(b/100);
}
int random0N(int n){
	return randomNM(0, n);							
	}
float randomNM_float(int n){
	return randomNM_float(0, n);
}
void setRandomMin(int min){
	random_min = min;
}
void setRandomMax(int max){
	random_max = max;
}
//Gestione vettore
void setDimensioneMax(int x){
	dim_max = x;
}
void riempiVettore(int v[], int n){
	for (int i=0; i<n; i++)
		v[i] = randomNM(VALORE_MIN, VALORE_MAX);
}
void riempiVettore(float v[], int n){
	for (int i=0; i<n; i++)
		v[i] = randomNM(VALORE_MIN, VALORE_MAX);
}
void riempiVettoreRandom(int v[], int n){
	for (int i = 0; i<n; i++)
		v[i] = randomNM(random_min, random_max);	
}
void riempiVettoreRandom(float v[], int n){
	for (int i = 0; i<n; i++)
		v[i] = randomNM_float(random_min, random_max);
}
bool aggiungiElemento(int v[], int &n){
	if (n != dim_max){
		int a;
		cout<<"Quale elemento vuoi aggiungere? ";
		cin>>a;
		v[n] = a;
		n++;
		return true;
	}
	return false;
}
bool aggiungiElemento(float v[], int &n){
	if (n != dim_max){
		int a;
		cout<<"Quale elemento vuoi aggiungere? ";
		cin>>a;
		v[n] = a;
		n++;
		return true;
	}
	return false;
}
bool rimuoviElemento(int v[], int &n, int pos){
	if (pos<n){
	for (int i = pos; i < n-1; ++i)
	{
		v[i] = v[i+1];
	}
	n--;
	return true;
	}
	return false;
}
bool rimuoviElemento(float v[], int &n, int pos){
	if (pos<n){
	for (int i = pos; i < n-1; ++i)
	{
		v[i] = v[i+1];
	}
	n--;
	return true;
	}
	return false;
}
//Stampa elementi del vettore
void stampaVettore(int v[], int n){
	cout << "Stampo il vettore:" << endl;
	for (int i=0; i<n; i++)
		cout << "\tElemento " << i+1 << ": " << v[i] << endl;
	cout << endl;
}
void stampaVettore(float v[], int n){
	cout << "Stampo il vettore:" << endl;
	for (int i=0; i<n; i++)
		cout << "\tElemento " << i+1 << ": " << v[i] << endl;
	cout << endl;
}
//Algoritmi array
void ordinamentoIngenuo(int v[], int n){
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (v[i] > v[j])
				swap(v[i], v[j]);
}
void ordinamentoIngenuo(float v[], int n){
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (v[i] > v[j])
				swap(v[i], v[j]);
}
void bubbleSort(int *v, int n, bool inverso){
	int alto;
 	if (inverso == false){
 		for (alto = n - 1; alto > 0; alto-- ){
 			for (int i=0; i<alto; i++){
 				if (v[i]>v[i+1]){
 				swap(v[i], v[i+1]);
 			}
 		}
 	}
 }
 else{
 	for (alto = n - 1; alto > 0; alto-- ){
 	for (int i=0; i<alto; i++){
 	if (v[i]<v[i+1]){
 		swap(v[i], v[i+1]);
 	}
 }
}
}
}
void bubbleSort(float *v, int n, bool inverso){
 	int alto;
 	if (inverso == false){
 		for (alto = n - 1; alto > 0; alto-- ){
 			for (int i=0; i<alto; i++){
 			if (v[i]>v[i+1]){
 				swap(v[i], v[i+1]);
 			}
 		}
 	}
 }
 else{
 	 		for (alto = n - 1; alto > 0; alto-- ){
 			for (int i=0; i<alto; i++){
 			if (v[i]<v[i+1]){
 				swap(v[i], v[i+1]);
 			}
 		}
 	}
  }
}


//Funzioni su array
float media(int v[], int n){
	float somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma += v[i];
	}
	return somma/float(n);
}
float media(float v[], int n){
	float somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma += v[i];
	}
	return somma/float(n);
}
int sommaVettore(int v[], int n){
	int somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma += v[i];
	}
	return somma;
}
float sommaVettore(float v[], int n){
	int somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma += v[i];
	}
	return somma;
}
void inverti(int v[], int n){
	for (int i = 0; i <n/2; i++){
			swap(v[i], v[n-1-i]);
		}
}
void inverti(float v[], int n){
	for (int i = 0; i <n/2; i++){
			swap(v[i], v[n-1-i]);
		}
}
bool ricercaBinaria(int v[], int n, int x){
	int inizio = 0, fine = n-1, medio;
	while (inizio <= fine)
	{
		medio = (inizio + fine) / 2;
		
		if (v[medio] == x)
			return true;
			
		if (v[medio] > x)
			fine = medio - 1;
		else
			inizio = medio + 1;
	}
	
	return false;
}
bool ricercaBinaria(float v[], int n, int x){
	int inizio = 0, fine = n-1, medio;
	while (inizio <= fine)
	{
		medio = (inizio + fine) / 2;
		
		if (v[medio] == x)
			return true;
			
		if (v[medio] > x)
			fine = medio - 1;
		else
			inizio = medio + 1;
	}
	return false;
}
int presente(int v[], int n, int x){
	for (int i=0; i<n; i++)
	{
		if (v[i] == x) {
			return i;
		}
	}
	return -1;
}
int presente(float v[], int n, float x){
	for (int i=0; i<n; i++)
	{
		if (v[i] == x) {
			return i;
		}
	}
	return -1;
}
int minore(int v[], int n){
	int currMin= v[0];
	for (int i = 0; i < n; i++){
		if (currMin > v[i] ){
			currMin = v[i];
		}
	}
	return currMin;
	
}
int minore(float v[], int n){
	float currMin= v[0];
	for (int i = 0; i < n; i++){
		if (currMin > v[i] ){
			currMin = v[i];
		}
	}
	return currMin;
	
}
int maggiore(int v[], int n){
	int currMax= v[0];
	for (int i = 0; i < n; i++){
		if (currMax < v[i] ){
			currMax = v[i];
		}
	}
	return currMax;
}
int maggiore(float v[], int n){
	float currMax= v[0];
	for (int i = 0; i < n; i++){
		if (currMax < v[i] ){
			currMax = v[i];
		}
	}
	return currMax;
}
int posizioneMinore(int v[], int n){
	int currMin= v[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (currMin > v[i] ){
			currMin = v[i];
			index = i;
		}
	}
	return index;	
}
int posizioneMinore(float v[], int n){
	int currMin= v[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (currMin > v[i] ){
			currMin = v[i];
			index = i;
		}
	}
	return index;	
}
int posizioneMaggiore(int v[], int n){
	int currMax= v[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (currMax < v[i] ){
			currMax = v[i];
			index = i;
			}
	}
	return index;
}
int posizioneMaggiore(float v[], int n){
	int currMax= v[0];
	int index = 0;
	for (int i = 0; i < n; i++){
		if (currMax < v[i] ){
			currMax = v[i];
			index = i;
			}
	}
	return index;
}