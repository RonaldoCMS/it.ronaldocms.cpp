#include <iostream>
using namespace std;
int main ()
{
 int da, ptot, perc, p_perc;
 char zona;
 
 	cout<<"Inserisci la dimensione dell'appartamento (in metri quadri):";
	 cin>>da;

	cout<<"Inserisci il numero corrispetivo alla zona:\n a. Centro;\n b. Zona 1;\n c. Zona 2;\n d. Zona 3.\n e. Periferia.\n";
	cin>>zona;
		
	cout<<"Inserisci la percentuale relativa alla provvigione spettante all'agenzia:";
	cin>>perc;
			
		switch (zona)
		{
		  	case 'a':
		  	ptot=1200*da;
		  	break;
			  	 
  			case 'b':
			ptot=1000*da;
			break;
			  	   	  
			case 'c':
 	   		ptot=900*da;
			break;
			  	   	  
			case 'd':
			ptot=750*da;
			break;
			  	   	  	  
			case 'e':
			ptot=600*da;
			break;
		}
	 	
	p_perc=p_perc+(ptot*perc/100);
	
	 	
	cout<<"Il prezzo totale dell'appartamento e\':"
	<<ptot
	<<endl
	<<"La percentuale relativa alla provvigione spettante all'agenzia e\':"
	<<p_perc<<endl;
	                                  
	system ("Pause");
}
