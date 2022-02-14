/**
* Inserire una sequenza di numeri interi di lunghezza n
* Indicare se all'interno della sequenza esiste un numero divisore di almeno 
* un altro numero della stessa sequenza
* es. [2, 4,6,8,7]  è ok per 8/2    [4,6, -8, 10] è ok -8/4    [2,-5,3,7,11] 
*/
#include <iostream>

using namespace std;

int main() 
{
  int sequenza[100];
  int n;
  bool trovato = false;
  int divisore;

  cout << "Quanti elementi vuoi inserire? ";
  do
  {
    cin>>n;
  }
  while(n <=0);

  for (int i=0; i < n; i++)
  {
    cout << "inserisci un elemento ";
    cin >> sequenza[i];
  }

  for(int i=0; i < n; i++)
  {
    //blocco un elemento e controllo tutti gli altri
    //con un secondi ciclo
    for(int j=0; j < n; j++)
    {
      if ((i != j) && (sequenza[j] % sequenza[i] == 0))
      {
        trovato = true;
        divisore = sequenza[i]; 
      }
    }
  }

  if (trovato)
    cout <<  "c'e' un divisore degli altri ->"<< divisore <<endl;
  else
    cout << "non c'e' divisore" << endl;

return 0;
}
