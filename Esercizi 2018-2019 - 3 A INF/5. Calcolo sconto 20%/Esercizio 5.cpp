/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Calcolo sconto automatico
Ultima modifica:20/12/18 20:28
*==================================================*/ 


#define SCONTO 20 //ho voluto metterti il nome proprio poichè è un algoritmo molto semplice

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {
	
	int tot; //totale
	
		cout<<"Inserisci costo: "; //stampa
			cin>>tot; //leggi
		
				tot=tot-(tot*SCONTO)/100; //applica lo sconto
	
		cout<<"Prezzo scontato: "<<tot<<endl; //stampa
		
	system("pause"); //blocca cmd
}
