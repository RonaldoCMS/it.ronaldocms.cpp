#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, N, c, q, c_tot, q_tot, c_media, q_media, N_media, somma;
	N=0;
	c_tot=0;
	q_tot=0;
	somma=0;
	N_media=0;
	
	for(i=1; i<=5; i=i+1)
	{
		N=N+2;
		somma=somma+N;
		q=pow(N,2);
		q_tot=q_tot+q;
		c=pow(N,3);
		c_tot=c_tot+c;
		cout<<i<<" "<<N<<" "<<q<<" "<<c<<" "<<endl;
	}
	cout<<"Somma: "<<somma<<endl<<"Totale quadrato: "<<q_tot<<endl<<"Totale cubo: "<<c_tot<<endl;
	
	N_media=somma/(i-1);
	q_media=q_tot/(i-1);
	c_media=c_tot/(i-1);
	cout<<"Media numeri: "<<N_media<<"  "<<"Media quadrato: "<<q_media<<"  "<<"Media cubo: "<<c_media<<endl;
	
	system("pause");
}
