/*
 * Leggere un numero indefinito di interi da tastiera
 * fino a che l'ultimo elemento inserito sia uguale
 * al penultimo inserito. Per ogni coppia di numeri 
 * inseriti, indicare se il secondo elemento è crescente 
 * o decrescente rispetto al precedente
*/ 
#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    int somma = 0;
  
    cout << "Inserisci il primo numero ";
    cin >> a;  
    cout << "Inserisci un altro numero ";
    cin >> b; 
  
    while (a != b )
    {
      if (a < b)
      {
        cout << "l'ultimo numero e' decrescente rispetto al precedente "<< endl;
      }  
      else
      {
        cout << "l'ultimo numero e' crescente rispetto al precedente "<< endl;
      } 

      a = b;
      cout << "Inserisci un altro numero";      
      cin >> b;
        
 
    }  
    return 0;
}
