#include <iostream>

using namespace std;

//Scrivi un programma che stabilisce se una persona � maggiorenne o minorenne in base all'et�.

int main()	{

	int eta;
	
	cout << "Inserisci eta'\t";
	cin >> eta;
	
	if(eta >= 18)
		cout << "Sei maggiorenne!" << endl;
	
	else 
		cout << "Sei minorenne!" << endl;

 	system("pause");
 	return 0;
}

