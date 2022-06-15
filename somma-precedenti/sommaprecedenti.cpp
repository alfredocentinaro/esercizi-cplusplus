/*
 * Leggere un numero indefinito di interi da tastiera
 * fino a che l'ultimo elemento inserito sia uguale
 * alla somma dei precedenti inseriti
*/ 
#include <iostream>
using namespace std;

int main() 
{
    int n;
    int somma = 0;
  
    cout << "Inserisci il primo numero ";
    cin >> n;  
  
    while (somma  != n )
    {
      somma = somma + n;
      cout << "Inserisci un altro numero ";
      cin >> n;
    }  
    return 0;
}
