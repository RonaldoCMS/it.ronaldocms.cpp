/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Calcolo sconto mettendo in input prezzo totale e sconto
Ultima modifica:20/12/18 20:28
*==================================================*/ 
#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {
	
	int tot, sc; //dichiarazione variabili
	
		cout<<"Inserisci costo: "; //stampa
			cin>>tot; //leggi
		
		cout<<"inserisci sconto: "; //stampa
			cin>>sc; //leggi
		
				tot=tot-(tot*sc)/100; //applica lo sconto
	
		cout<<"Prezzo scontato: "<<tot<<endl; //stampa
		
	system("pause"); //blocca cmd
}
