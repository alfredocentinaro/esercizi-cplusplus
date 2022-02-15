#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int const DIM = 10;
	
int main() 
{
	srand(time(NULL));
	
	int scelta = -1;
	int v[DIM];
	int valore;
	int contatore = 0;

	cout << "|-------------------------------------|" << endl;
	cout << "|                MENU                 |" << endl;
	cout << "|-------------------------------------|" << endl;
	cout << "1. Carica vettore da input" << endl;
	cout << "2. Carica vettore random" << endl;
	cout << "3. Stampa vettore" << endl;
	cout << "4. Conta quante ripetizioni di un numero scelto" << endl;
	cout << "0. Esci " << endl;
		
	while (scelta != 0) //fa ripetere la scelta del menu ad oltranza!
	{			
		cout << "Scegli -> ";
		cin >> scelta;
		
	
		switch (scelta)
		{
		
			case 1:
				for (int i=0; i<DIM; i++ )
				{
					cout << "Inserisci un valore ";
					cin >> v[i];
				}
				break;
				
			case 2:
				for (int i=0; i< DIM; i++ )
				{
					v[i] = rand() % 100;
				}		
				cout << "Caricato!" << endl;	
				break;
				
			case 3:
				for (int i=0; i<DIM; i++ )
				{
					cout << v[i] << " ";
				}	
				cout << endl;		
				break;
				
			case 4:
				cout << "inserisci il valore da valutare ";
				cin >> valore;
				
				for (int i=0; i<DIM; i++ )
				{
					if (v[i] == valore)
					{
						contatore++;
					}
				}
				
				cout << "il numero "<< valore<<" si ripete "<<contatore << endl;
				break;
			
			case 0:
				//non faccio un tubo, mi serve solo per uscire dal ciclo
				break;
					
			default:
				cout << "Scelta non valida" << endl;
																
		}		
	}		
		 	
	return 0;
}
