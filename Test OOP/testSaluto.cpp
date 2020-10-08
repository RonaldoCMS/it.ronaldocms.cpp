#include <iostream>
#include <string>

using namespace std;

class Persona {
	
	//Attributi
	private :
		string nome = "sasdadsa";
		string cognome;
	
	//metodi
	
	public:
		void saluta() {
			cout << "Ciao, mi chiamo "<< nome <<" "<< cognome <<"!\n";
		}
	
};

int main() {
	
	Persona p;
	
	p.saluta();
	
	getchar();
	return 0;
}
