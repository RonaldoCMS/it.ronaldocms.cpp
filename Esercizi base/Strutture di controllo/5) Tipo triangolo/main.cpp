#include <iostream>

using namespace std;

//Scrivi un programma che richiede all'utente le misure dei tre lati di un triangolo,
//e comunica se il triangolo è equilatero, isoscele o scaleno.

//isoscele se due dei suoi lati sono congruenti;
//equilatero se ha tutti e tre i lati congruenti;
//scaleno in tutti gli altri casi.

int main()	{

	int angolo[3];
	
	for(int i=0; i<3; i++) {
		cout << "Inserisci angolo numero " << i+1 << ":\t";
		cin>>angolo[i];
	}
	
	if(angolo[0] == angolo[1])
		if(angolo[1] == angolo[2])
			cout<< "Triangolo equilatero"<<endl;
		else
			cout<<"Triangolo isoscere"<<endl;
	else
		cout << "Triangolo scaleno"<<endl;

 	system("pause");
 	return 0;
}

