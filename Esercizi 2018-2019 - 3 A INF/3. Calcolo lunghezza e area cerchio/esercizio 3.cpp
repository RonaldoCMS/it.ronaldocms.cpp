/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Avendo il raggio di un cerchio calcolare lunghezza e area del cerchio.
Ultima modifica: 20/12/18 19:29
*==================================================*/ 


#include <cmath> //LIBRERIA PER ORIENTARCI ALLA MATEMTICA
				 // ESISTE ANCHE math.h EREDITATO DAL LINGUAGGIO C

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {
	
	
	//Poichè il p greco è una constante fissa matematica potevamo farne almeno
	//della costante. Per comodità le constanti si scrivono in maiuscolo.
	
	const float P_G = 3.14; //IN INFORMATICA NON SI METTE LA VIRGOLA MA IL PUNTINO.
	int r;
	
	cout<<"Inserisci raggio: "; //stampa
		cin>>r; //leggi
		
	float l = 2*P_G*r; // l = lunghezza del raggio
	float ar = P_G  * pow(r,2); //ar = Area del raggio
	
	cout<<"lunghezza del raggio: "<<l;
	cout<<"\nArea del raggio: "<<ar<<endl; // \n => sequenza di escape, endl => capolinea
	

	system("pause"); //blocca cmd
	
}
