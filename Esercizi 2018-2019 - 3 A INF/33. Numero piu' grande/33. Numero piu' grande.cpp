#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	
	cin>>x>>y>>z;
	
	if (x>y && x>z)
	{
		cout<<"Grande: "<<x<<endl;
		if(y>z)
		{
			cout<<"Medio: "<<y<<endl
			<<"Piccolo: "<<z<<endl;
		}
		else
		{
			cout<<"Medio: "<<z<<endl
			<<"Piccolo: "<<y<<endl;
		}
	}
	
	else if(y>x && y>z)
	{
		cout<<"Grande: "<<y<<endl;
		if(z>x)
		{
			cout<<"Medio: "<<z<<endl;
			cout<<"Piccolo: "<<x<<endl;
		}
		else
		{
			cout<<"Medio: "<<x<<endl;
			cout<<"Piccolo: "<<z<<endl;
		}
	}
	
	else
	{
		cout<<"Grande: "<<z<<endl;
		
		if(x>y)
		{
			cout<<"Medio: "<<x<<endl;
			cout<<"Piccolo:"<<y<<endl;
		}
		
		else
		{
			cout<<"Medio: "<<y<<endl;
			cout<<"Piccolo: "<<x<<endl;
		}
	}
	

		
		
	
	
	system("pause");
}
