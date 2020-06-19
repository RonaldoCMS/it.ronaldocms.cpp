/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Sommare 4 prodotti e farci lo sconto
Ultima modifica: 20/12/18 20:50
*==================================================*/

#define J 4

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {

	float tot=0, num, sc; //float > Reale; //dichiarazioni

		for(int i; i<=J; i++) //ciclo for

		{
			cout<<"inserisci numero: "; //stampa
				cin>>num;	//leggi
			
					tot=num+tot;	//calcolo
										}

		cout<<"inserisci sconto: "; //stampa
			cin>>sc;	//leggi

				tot=tot-(tot*sc)/100; //calcolo

		cout<<"prezzo totale scontato: "<<tot<<endl; //stampa
		
	system("pause"); //blocco cmd
}

