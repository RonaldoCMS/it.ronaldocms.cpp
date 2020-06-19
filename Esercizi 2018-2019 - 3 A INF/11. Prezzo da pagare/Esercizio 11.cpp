/*==============================================
Nome:			Fabio Danubbio
Titolo: 		In base all'età stabilire il prezzo da pagare
Ultima modifica: 23/01/19 17:36
*==================================================*/
#include <iostream>
#include <process.h>

int main() {
	
	short int eta;
	
	std::cout<<"Inserisci la tua eta' per scoprire il prezzo da pagare: ";
	std::cin>>eta;
	
	system("pause");
	system("cls");
	
	if (eta <= 0 or eta>=120)
	std::cout<<"Spiacente, si è verificato un errore: Verificare se l'eta è reale.";
	
	if (eta<=5)
	std::cout<<"Per i bambini, prima dei 6 anni compiuti non pagheranno nulla, entrata gratuita.";
	
	if (eta>=6 and eta<=10)
	std::cout<<"Il prezzo stabilito per i bambini tra i 6-10 anni e' di 1 euro.";
	
	if (eta>=11 and eta<=17)
	std::cout<<"Per i ragazzi della fascia di eta' 11-17 pagheranno 1,50 euro.";
	
	else
	std::cout<<"Il prezzo da pagare ai ragazzi di oltre 17 anni e' di 2 euro.";
	

	std::cout<<std::endl;
	system("pause");
	return 0;
}
