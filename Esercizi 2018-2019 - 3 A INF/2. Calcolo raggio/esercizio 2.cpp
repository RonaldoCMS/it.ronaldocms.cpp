/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Avendo altezza e base calcolare l'area raggio del cerchio
Ultima modifica: 20/12/18 19:25
*==================================================*/ 

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {

int h,b; //a = altezza, b = base;

	cout<<"Inserisci altezza: "; //stampa
		cin>>h;	//leggi
	
	cout<<"Inserisci base: ";	//stampa
		cin>>b;	//leggo
		
			int ar = b*h; //area raggio del cerchio
			
	cout<<"area del raggio del cerchio: "<<ar; //stampa

system("pause"); //blocca cmd
}
