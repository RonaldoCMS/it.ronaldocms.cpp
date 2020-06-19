#include <iostream>
#include <string.h>

#define MAX 2

using namespace std;

struct info
{
	string nome[MAX];
	string cognome[MAX];
	string indirizzo[MAX];
	string telefono[MAX];
};

int main()
{
	int i;
	int lunghezza_1[MAX];
	int lunghezza_2[MAX];
	string max;
	
	info persona;
	
	for(i=0; i<MAX; i++)
	{
	cout<<"Inserisci nome: ";
	 cin>>persona.nome[i];
	 lunghezza_1[i] = persona.nome[i].length();
	
	cout<<"Inserisci cognome: ";
	 cin>>persona.cognome[i];
	 
	cout<<"Inserisci indirizzo: ";
	 cin>>persona.indirizzo[i];
	 
	cout<<"Inserisci telefono: ";
	 cin>>persona.telefono[i];
	 
	 
	 
	if (lunghezza_1[i] > lunghezza_2[i])
	{
		max=persona.nome[i];
	}
	
	lunghezza_2[i] = lunghezza_1[i];	
	 
	}
	
	 system("cls");
	 
	 for(i=0; i<MAX; i++)
	 {
	 cout<<endl
	 <<"\nNome: "<<persona.nome[i]
	 <<"\nCognome: "<<persona.cognome[i]
	 <<"\nIndirizzo: "<<persona.indirizzo[i]
	 <<"\nTelefono: "<<persona.telefono[i]
	 <<endl;
	}
	
	cout<<endl
	<<"Il nome piu' grande e': "<<max
	<<endl;
	
	
	 system("pause");
}
