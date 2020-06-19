/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Avendo 3 numeri calcolare la media
Ultima modifica:20/12/18 19:46
*==================================================*/ 
#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

#define J 3 //valore per la media, cosìsostituendo questo valore non ci sarà ulteriori modifiche
			//all'algoritmo in caso di un calcolo della media valore o maggiore

int main() {
	
	int tot=0, num, media; //dichiarazione
	
	for(int i; i<=J; i++) //ciclo for
	{
		
	/*
	è un ciclo contatore, ha la stessa funzione di un while con una variabile
	contatore
					Esempio: while (i<j)
						//istruzioni
							i++;
																				*/
	
		cout<<"inserisci numero"<<endl; cin>>num; //stampa
		tot=num+tot; //calcolo totale
		
													}
	
			media=tot/J; //media della totale
	cout<<"la media e' "<<media; //stampa 


	system("pause"); //blocco cmd
}
