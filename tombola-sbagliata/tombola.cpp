/** 
Una tombola "sbagliata" dove estraiamo a caso una serie di numeri. Ad ogni estrazione si deve verificare se 
il numero estratto fa ambo con uno dei numeri già estratti precedentemente, ovvero se è un doppione. 
In caso un numero viene estratto tre volte il gioco si arresta.
*/
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main() 
{
  bool presentenellacartella=0;
  bool presenteneidoppioni=0;
  int num; //numero estratto
  int indicecartella=0;  //indice dinamico per i numeri estratti una volta
  int indicedoppioni=0;  //indice dinamico per i numeri doppioni
  int cartella[90];  // il vettore dove inserisco i numeri alla prima estrazione
  int doppioni[90];  // ci inserisco i numeri estratti due volte
  bool trovato=0;  // se vero ho estratto un numero tre volte
  
  srand(time(NULL));
  while(!trovato)
  {
    presentenellacartella=0;
    presenteneidoppioni=0;
      
    num=rand()%90+1;
    cout<<"Estraggo il numero: "<<num<<endl;
    
    //controllo se il numero estratto sia presente
    //tra quelli estratti, scorro tutto il vettore
    for(int i=0; i<indicecartella; i++)
    {
      if (cartella[i]==num)
      {
        presentenellacartella=true;          
      }
    }

    if (presentenellacartella==0)
    {
      cout<<"Inserisco il numero nella cartella"<<endl;
      cartella[indicecartella]=num;
      indicecartella++;
    }
    else
    {
      cout << "Ho trovato doppione"<<endl;
      //devo controllare se già presente tra i doppioni,
      //ovvero è la terza volta che lo estraggo
      //oppure è la primo doppione
      //riscorro il vettore dei doppioni
      for(int i=0; i<indicedoppioni; i++)
      {
        if (doppioni[i] == num)
        {
          presenteneidoppioni=true;          
        }  
      }
          
      if (presenteneidoppioni)
      {
        trovato=1;
        cout << "Estratto per la terza volta - ESCO"<<endl;
      } 
      else 
      {
        cout<<"Inserisco il numero tra i doppioni" <<endl;
        doppioni[indicedoppioni]=num;
        indicedoppioni++;
      }
    }
    
    sleep(1); //dormo 1 secondo
    cout<< "----------------------------------" <<endl;
  }
