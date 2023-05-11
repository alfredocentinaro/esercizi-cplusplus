#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>      // std::setw

using namespace std;

int const N = 4;

void creaCartella(int [N][N]);
void stampaCartella(int [N][N]);
void trovaNumero(int [N][N], int , int *, int *);
void scambia(int [N][N], int , int , int , int );
bool controllaScambio( int , int , int , int );
bool vincente(int [N][N]);

int main()
{
    srand(time(NULL));

    bool vinto = false;
    char resa;
    int cartella [N][N];
    int numero_da_scambiare;

    int x_da_scambiare, y_da_scambiare;
    int x_zero, y_zero;

    creaCartella(cartella);
    stampaCartella(cartella);


    while(!vinto)
    {
        //cominciamo gli scambi
        cout << "-----------------------------" << endl;
        cout << "Che numero vuoi scambiare? ";
        cin >> numero_da_scambiare;

        trovaNumero(cartella,numero_da_scambiare,&x_da_scambiare,&y_da_scambiare );
        //cout <<"Coordinate "<<x_da_scambiare << " "<< y_da_scambiare <<endl;
        trovaNumero(cartella,0,&x_zero,&y_zero );
        //cout <<"Coordinate "<< x_zero << " " <<y_zero <<endl;
        if (controllaScambio( x_da_scambiare,y_da_scambiare,x_zero,y_zero))
            scambia(cartella, x_da_scambiare,y_da_scambiare,x_zero,y_zero);
        else
            cout << "Scambio non valido "<< endl;
        stampaCartella(cartella);

        cout << "Ti arrendi? Premi q altrimenti un tasto qualsiasi ";
        cin >> resa;
        if  (resa == 'q')
        {
            vinto = true;
        }

        if (vincente(cartella))
        {
            cout << "Hai vinto!" << endl;
            vinto = true;
        }
    }

    return 0;
}


void creaCartella(int _cartella[N][N])
{
    int ok;
    int numero =0 ;

    for (int k=0; k < N; k++)
        for (int z=0; z < N; z++)
    {
        ok = 1;
        while (ok == 1)
        {
            numero = rand() % 16;
            ok = 0;
            for (int i=0; i < N; i++)
            {
                for (int j=0; j < N; j++)
                {
                    if (_cartella[i][j] == numero)
                        ok = 1; //ne ho trovato almeno uno uguale
                }
            }
        }
        _cartella[k][z] = numero;
    }
}


void stampaCartella(int _cartella[N][N])
{
    for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j ++)
        {
            cout << setw(2) ;
            cout << _cartella[i][j] << " ";//ne ho trovato almeno uno uguale
        }

        cout << endl;
    }
}

void trovaNumero(int _cartella[N][N], int _numero, int *x, int *y)
{
    for (int i= 0; i< N; i++)
    {
        for (int j=0; j< N; j++)
        {
            if (_cartella[i][j] == _numero)
            {
                *x= i;
                *y= j;
            }
        }
    }
}

void scambia(int _cartella[N][N], int x, int y, int i, int j)
{
    int tmp;

    tmp = _cartella[x][y];
    _cartella[x][y] = _cartella[i][j];
    _cartella[i][j] = tmp;
}

bool controllaScambio( int x, int y, int i, int j)
{
    //controlla sinistra
    if (y < j && j-y != 1 && x==i)
        return false;

     //controllo destra
     if (y > j && y-j != 1 && x==i)
        return false;

    //controllo sopra
    if (x > i && x - i != 1 && y==j)
        return false;

    //controllo sotto
    if (x < i && i-x != 1 && y==j)
        return false;

    //digonale
    if (x != i && y != j)
        return false;

    return true;
}

bool vincente(int _cartella[N][N])
{
    int contatore = 1;
    for (int i =0; i < N; i++ )
        for (int j=0; j < N; i++)
        {
            if (contatore != _cartella[i][j])
                return false;
            contatore++;

        }
    return true;
}
