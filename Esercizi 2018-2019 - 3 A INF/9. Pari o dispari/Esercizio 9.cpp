/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Inserendo un numero stampare se è pari o dispari.
Ultima modifica: 22/12/18 17:36
*==================================================*/
#include <cmath> //libreria C++ di funzioni di matematica
#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main()
{
	const int MAX = 9; //costante
	int x[MAX]; //dichiarazione vettore
	
	cout<<"\t\t";
	
		for (int i=0; i<=MAX; i++) //ciclo fot
		{	
			cout << "\tinserisci:\t -> "; //stampa
     			cin >> x[i];  //leggi
	
					if (x[i]%2==0) //condizione pari
					cout<<x[i]<<"\tPARI\t";
						
						else //condizione opposta
						cout<<x[i]<<"\tDISPARI\t";
														}
														
cout<<endl;			
system("pause"); //nlocco cmd			
}




