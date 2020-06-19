/*==================================================*
Nome:			Fabio Danubbio
Titolo: 		Realizza un programma in C++ che calcoli la spesa da un cliente in un negozio
				di abbigliamento tenendo conto delle seguenti condizioni.	
Ultima modifica:11/01/19 14:52
*==================================================*/ 
#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main()
{
	int x; //dichiarazioni
	
	cout<<"Inserisci somma spesa: "; //stampa
		cin>>x; //leggi
	cout<<"Prezzo finale: "; //stampa
	
	/* SERIE DI CONDIZIONI */
	
	if(x<100)
	x=x-((x*10)/100);
	
	else if (x>=100 && x<200)
	x=x-((x*20)/100);
	
	else
	x=x-((x*30)/100);
	
	cout<<x<<endl; //stampa
	
	return 0;
	system("pause");
}
