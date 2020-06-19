/*==============================================
Nome:			Fabio Danubbio
Titolo: 	In base all'input stabilire spesa totale.		
Ultima modifica: 	06/04/19 10:55
*==================================================*/ 


#include <iostream>

using namespace std;

int main(){
	
	char t;
	double c;
	
	cout<<"Inserisci m per MOTOCICLO"<<endl
	<<"Inserisci c per CAMION"<<endl
	<<"Inserisci a per AUTOMOBILE"<<endl
	<<"\n Inserisci valore: ";

		cin>>t;
		
	switch(t)
	{
		case 'm': {
			c=1.50;
			break;
		}
		
		case 'a': {
			c=2.00;
			break;
		}
		
		case 'c': {
			c=4.00;
			break;
		}
		
		default: {
			cout<<"ERRORE";
			exit(0);
			break;
			}	
		}
		
		cout<<"Hai speso un totale di: "<<c<<" euro.\n";
				
		system("pause");
		
		return 0;
																}
