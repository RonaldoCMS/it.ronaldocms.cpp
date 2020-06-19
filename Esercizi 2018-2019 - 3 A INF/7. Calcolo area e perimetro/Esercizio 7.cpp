/*==============================================
Nome:			Fabio Danubbio
Titolo: 		Avendo base minore, maggiore e altezza di un trapezio calcolare area e perimetro
Ultima modifica: 20/12/18 20:34
*==================================================*/ 


#include <cmath> //LIBRERIA PER ORIENTARCI ALLA MATEMTICA
				 // ESISTE ANCHE math.h EREDITATO DAL LINGUAGGIO C

#include <iostream> //libreria principale

using namespace std; //aggiunge automaticamente std:: (std::cout)

int main() {
	
	int b_min, b_max, h; //dichiarazioni
	
	/* SERIE DI STAMPA - LEGGI */
	
	cout<<"inserisci base maggiore: "; 
		cin>>b_max;
		
	cout<<"inserisci base minore: ";
		cin>>b_min;
		
	cout<<"inserisci altezza: ";
		cin>>h;
	
	/* Poichè sono rovinato con la matematica, per far si che comunque parta
		l'algoritmo ho dovuto spezzarlo e dichiarare variabili ulteriori
		per arrivare alla soluzione */
	
	
	/* espressione a variabile dichiarata */
	int A=(b_max+b_min)*(h/2);
	int a1=b_max-b_min;
	int a2=pow(h,2);
	int a = sqrt(pow(a1,2)+a2);
	int p = b_max+b_min+h+a;
	
	//Se ritieni lungo come in questo caso questa linea di comando
	//puoi anche spezzarla in questo modo, l'importante è che non metti
	// " ; " altrimenti risulteranno 2 linee di comando diverse.
	cout<<endl<<"Area: "<<a<<
	"\nperimetro:"<<p<<endl;
	
	
	system("pause"); //blocco cmd
}
