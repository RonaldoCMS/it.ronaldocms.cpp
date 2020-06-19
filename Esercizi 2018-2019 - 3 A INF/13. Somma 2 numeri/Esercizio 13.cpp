/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Somma 2 numeri
Ultima modifica: 20/12/18 19:25
*==================================================*/ 



#include <iostream>

using namespace std;

int metodo(int x,int y) {
	
	int z;
	
	if(x%2==0 && y%2==0)
	z=x/y;
	
	else
	z=x+y;
	
	return z;
}

int main() {
	
	int x,y,z;
	
	cout<<"Inserisci primo numero: ";	cin>>x;
	cout<<"Inserisci secondo numero: ";	cin>>y;
			
	z=metodo(x,y);
	
	cout<<"Risultato: "<<z;
	
	return 0;
}
