#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "-----A------------------B--------------"<<endl<<endl;	
	cout << "Inserisci il primo punto A ";
	cin >> a;
	
	cout << "Inserisci il secondo punto B ";
	cin >> b;
	
	cout << "Inserisci il terzo punto da verificare ";
	cin >> c;
	
	cout << endl;
	
	if (c > b )
	{
		cout << "Il punto e' esterno a destra del segmento " << endl;
		cout << "-----A------------------B-------C------"<<endl;
	}

	if (c > a && c < b )
	{
		cout << "Il punto e' interno al segmento " << endl;
		cout << "-----A--------C---------B--------------"<<endl;
	}

	if (c < a )
	{
		cout << "Il punto e' esterno a sinistra del segmento " << endl;
		cout << "--C---A------------------B-------------"<<endl;		
	}
	getchar();
	return 0;
}
