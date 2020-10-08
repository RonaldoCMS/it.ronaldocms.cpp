#include <iostream>

using namespace std;

int main()	{

//	int var = 10; //Variabile
//	int *var = 10; //Puntatore
	
	
	int var = 10;
	
	//Un puntatore occupa sempre 3 byte + i byte della variabile
	int *puntatore;
	
	//Punta l'indirizzo della variabile
	puntatore = &var;
	
	cout<<"indirizzo Puntatore : "<<&puntatore<<endl
	<<"Valore puntatore : "<<*puntatore<<endl;
	
	*puntatore = 5;
	
	cout<<"indirizzo var : "<<&puntatore<<endl
	<<"Valore var : "<<var<<endl;
	
	system("pause"); 	
 	return 0;
}

