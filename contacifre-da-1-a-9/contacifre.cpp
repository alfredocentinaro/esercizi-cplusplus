/*
* Progettare e disegnare algoritmo e codifica di un programma che legge numeri
* in ingresso da 1 a 9 ad oltranza finché viene inserito 0. 
* Contare e stampare a * video quante volta si presenta ognuna delle 9 cifre.
*/
#include <iostream>

using namespace std;

int main()
{
  int num = -1;
  int c1 =0;
  int c2 =0;
  int c3 =0;
  int c4 =0;
  int c5 =0;
  int c6 =0;
  int c7 =0;
  int c8 =0;
  int c9 =0;

  while (num != 0)
  {
    cout << "Inserisci un numero positivo" << endl;
    cin >> num;

    switch(num)
    {
      case 1:
          c1++;
          break;

        case 2:
          c2++;
          break;

        case 3:
          c3++;
          break;

        case 4:
          c4++;
          break;

        case 5:
          c5++;
          break;

        case 6:
          c6++;
          break;

        case 7:
          c7++;
          break;

        case 8:
          c8++;
          break;

        case 9:
          c9++;
          break;

        case 0:
          break;  

        default:
          cout << "Errore di inserimento" <<endl;
    }
  }
  cout << endl;
  cout<< "|*******************|" << endl;
  cout<< "|     CONTEGGIO     |" <<endl;
  cout<< "|*******************|" << endl;
  cout << "1 ->"<<c1 <<endl;
  cout << "2 ->"<<c2 <<endl;
  cout << "3 ->"<<c3 <<endl;
  cout << "4 ->"<<c4 <<endl;
  cout << "5 ->"<<c5 <<endl;
  cout << "6 ->"<<c6 <<endl;
  cout << "7 ->"<<c7 <<endl;
  cout << "8 ->"<<c8 <<endl;
  cout << "9 ->"<<c9 <<endl;

  return 0;
}
