#include "iostream"
using namespace std;
int main(void)
{
    //variables
    int anno, primera, segunda, tercera;

    cout << endl << "ANNO BISIESTO" << endl << endl;
    cout << "Ingrese el anno que quiere verificar" << endl;
    cin >> anno;
    primera = anno % 400;
    segunda = anno % 4;
    tercera = anno % 100;
   
    if(primera == 0) //if en el cual podemos realizar la primera comprobacion de un anno bisiesto
    {
        cout << "el anno es bisiesto";
    }
    else
    {
        if (segunda == 0 && tercera != 0) //con este if tambien verificamos si es una anno bisiesto
        {
            cout << "Si es un anno bisiesto ";
        }
        else  //con este otro se infroma que el resto de annos no sosn bisisestos 
        {
            cout << "No es un anno bisisesto";
        }
    }
}