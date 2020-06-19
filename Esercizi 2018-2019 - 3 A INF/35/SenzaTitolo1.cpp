#include <iostream>

using namespace std;

/*Inserita una data, converte il mese da numero a parola*/

#define MAX 31

int giorno(int a);

int main()
{
	int g;
	
	cout<<"aggiungi giorno: ";
	giorno(g);
	
	cout<<g<<endl;
}

int giorno(int g)
{
	do
	{
		cin>>g;
	}
	
		
	while(g>MAX);
	
	return g;
}

