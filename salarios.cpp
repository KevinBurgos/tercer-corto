#include "iostream"
using namespace std;
int main(void)
{
    //variables.
    int repeticiones, N, horas, horasextra ;
    float salario, normal, extra, resultado, social, afp, descuentos, salariorenta, renta;
    
    cout << endl << "CALCULAR EL SALARIO" << endl << endl;
    cout << "ingresar el total de trabajadores a quienes se les calculara el salario:";
    cin >> N;
    cout << endl << endl;
    for(repeticiones = 1; repeticiones <= N; repeticiones++) // con esto se realizara el calculo de salario las veces que sean necesarias segun el numero de empleados.
   
    {
        // distintas formulas para lograr calcular el salario de un empleado.
        cout << "Trabajador numero " << repeticiones << endl;
        cout << "ingresar el total de horas trabajadas: ";
        cin >> horas;
        cout << "ingresar el total de horas extras trabajadas: ";
        cin >> horasextra;
        normal = horas * 1.75;
        extra = horasextra * 2.50;
        resultado = normal + extra;
        social = resultado * 0.04;
        afp =resultado * 0.0625;
        descuentos  = (social + afp);
        salario = resultado - descuentos;

        if ( salario > 500)  // buscamos saber y poder aplicar el descuento sobre la renta.
        {
            renta = salario * 0.10;
            salariorenta = salario - renta;
            cout << endl << "Su salario es: " << salariorenta << "$" << endl << endl;

        }
        else // no aplica el descuento sobre la renta
        {
            cout << "Su salario es: " << salario << "$" << endl << endl;
        }
    }
}


