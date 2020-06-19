/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Dato base e altezza calcolare l'area

Ultima modifica:20/12/18
*==================================================*/ 

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {
                                                             
	int b, h; //b = base, h = altezza
	
	cout<<"Inserisci base: "; //leggi
		cin>>b;	//stampa
		
	cout<<"Inserisci altezza: "; //leggi
		cin>>h; //stampa
	
	int a=b*h; //a = area; //calcolo
	
	cout<<"Area: "<<a; //stampa
	
	system("pause"); //blocca cmd
	
	
}
