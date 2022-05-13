/**
* Scrivi una funzione che legga da tastiera/input un vettore di 5 interi. 
* Dal programma principale, scorri il vettore appena letto e 
* chiama una funzione che stampa
*/
#include <iostream>

using namespace std;

void leggi(int vettore[])
{
    int pippo = 0;
    for (int i=0; i < 5; i++)
    {
        cout << "inserisci un elemento intero ";
        cin >> vettore[i];
    }
}

void stampa(int numero)
{
    for(int i=0; i < numero; i++)
    {
        cout << "*";
    }
    cout << endl;

    return;
}


int main()
{
    int vettore[5];

    leggi(vettore);

    for (int i=0; i < 5; i++ )
    {
        stampa(vettore[i]);
    }

    return 0;
}
