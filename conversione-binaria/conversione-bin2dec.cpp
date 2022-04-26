/*
* Inserire un numero di binario di 8 cifre 
* sottoforma di vettore. Stampalo per verifica.
* Fai la conversione di tale numero in decimale
*/

#include <iostream>
using namespace std;

int const DIM = 8;

int potenza(int _base, int _esponente)
{
  int potenza = 1;
  
  for (int i=0; i < _esponente; i++)
  {
    potenza = potenza * _base;  
  }  

  return potenza;
}

int converti(int vettore[])
{
  int somma = 0;
  for (int i=0; i < DIM; i++)
  {
    somma += potenza(2, i)* vettore[i];
  }  

  return somma;
}

void leggi(int vettore[])
{
  cout<< endl;
  cout<< "-------------------------"<< endl;
  cout<< "        LETTURA          "<< endl;
  cout<< "-------------------------"<< endl;
  for (int i=0; i < DIM; i++)
  {
    do
    {
    cout << "Inserisci bit in posizione " << i << " ";
    cin >> vettore[i];      
    }  
    while(vettore[i] != 0 && vettore[i] != 1);
  }

  return;
}

void stampa(int vettore[])
{
  cout<< endl;
  cout<< "-------------------------"<< endl;
  cout<< "         STAMPA          "<< endl;
  cout<< "-------------------------"<< endl;
  for (int i=0; i < DIM; i++)
  {
    cout << vettore[i] << " ";
  }  
  
  return;
}

int main() 
{
  int vettore[DIM];
  int decimale = 0;
  
  leggi(vettore);
  stampa(vettore);
  decimale = converti(vettore);

  cout << endl;
  cout << "Il numero convertito in decimale e' " << decimale << endl;
  return 0;
}
