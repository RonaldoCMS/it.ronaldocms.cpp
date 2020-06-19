#include <iostream>

using namespace std;

int main()
{
	char C;
	
	cout<<"inserisci lettera: ";
	 cin>>C;
	 
	 if (C >= 'A' && C <= 'Z')
	 C=C+32;
	 
	 else if (C  >= 'a' && C <= 'z')
	 C=C-32;
	 
	 else
	 exit(0);
	 
	 cout<<C<<endl;
	 
	 system("pause");
	
}
