#include "iostream"
using namespace std;
int main(void)
{
    // variables
    int secreto = 78, j, intentos, cerrar;
    cout << endl << "NUMERO MAGICO" << endl << endl;
    cout << "Tienes que adivinar el numero secreto, se encuentra entre 1 y 100" << endl << endl;
    
for (intentos = 4; intentos >= 0; intentos--) // este for calcula el total de intentos
    {
      cout << "Ingresar el numero ganador: ";
      cin >> j;
      if (j == secreto) // con este if, podemos ver si se ha ganado o no el juego.
      {
         cout << "Felicidades has ganado!!" << endl << endl;
         
         break;
      }
        if (j > secreto) // este if es el que nos ayuda a dar las pistas.
        {
            cout << endl << "El numero que ingresaste es mayor al numero secreto." << endl;
            cout << "Quieres salir del juego?" << endl << "1. Si" << endl  << "2. No" << endl << "Ingresa el numero ";
            cin >> cerrar;
            if (cerrar == 1) // if para cerrar el juego.
            {
                return 0;
            }
                if (cerrar >= 3) // por si el usuario se equivoca.
                {
                    cout << "ingresaste el numero que no era " << endl;
                    cout << "vuelve a intentarlo 1 o 2" << endl;
                    cin >> cerrar;
                    if (cerrar == 1)
                    {
                        return 0;
                    }
                }
        }
        else // segunda parte de la pista 
        {
            cout << endl << "el numero que ingresaate es menor al numero secreto." << endl;
            cout << "Quieres salir del juego?" << endl << "1. Si" << endl  << "2. No" << endl << "Ingresa el numero ";
            cin >> cerrar;
            if (cerrar == 1) // if para cerrar el programa.
            {
                return 0;
            }
                if (cerrar >= 3) // por si el usuario se equivoca.
                {
                    cout << "ingresaste el numero que no era " << endl;
                    cout << "vuelve a intentarlo 1 o 2" << endl;
                    cin >> cerrar;
                    if (cerrar == 1)
                    {
                        return 0;
                    }

                }
        }
        cout << "Te quedan " << intentos << " intentos" << endl << endl;
    }

    cout << "La respuesta era " << secreto << endl << endl;
}
