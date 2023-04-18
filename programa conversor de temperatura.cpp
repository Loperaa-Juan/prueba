#include <iostream>
using namespace std;
int main()
{
    int tipo_1 = 0;
    int tipo_2 = 0;
    float grados = 0;
    float grados_finales = 0;
    cout.precision(5);
    cout << "\tBIENVENIDO A ESTE CONVERSOR DE TEMPERATURA\n\n";
    cout << "Escoge la escala de temperatura inicial que deseas convertir\n";
    cout << "1. Grados Celsius\n";
    cout << "2. Grados Fahrenheit\n";
    cout << "3. Grados Kelvin\n";
    cout << "4. Grados Rankine\n";
    cin >> tipo_1;

    switch (tipo_1)
    {
    case 1:
        cout << "Ingrese la escala de temperatura a la que desea pasar\n";
        cout << "1. Grados Fahrenheit\n";
        cout << "2. Grados Kelvin\n";
        cout << "3. Grados Rankine\n";
        cin >> tipo_2;
        cout << "Ahora ingrese los grados a convertir: ";
        cin >> grados;
        if (tipo_2 == 1) {
            grados_finales = (grados*9/5)+32;
            cout << grados << "Grados Celsius son equivalentes a" << grados_finales << "Grados Fahrenheit";
        }
        if (tipo_2 == 2) {
            grados_finales = grados + 273.15;
            cout << grados << "Grados Celsius son equivalentes a" << grados_finales << "Grados Kelvin";            
        }
        if (tipo_2 == 3) {
            grados_finales = (1.8 * grados) + 491.67;
            cout << grados << "Grados Celsius son equivalentes a"<< grados_finales << "Grados Rankine";
        }
        break;
    case 2:
        cout << "Ingrese la escala de temperatura a la que desea pasar\n";
        cout << "1. Grados Celsius\n";
        cout << "2. Grados Kelvin\n";
        cout << "3. Grados Rankine\n";
        cin >> tipo_2;
        cout << "Ahora digite los datos a convertir:";
        cin >> grados;
        if (tipo_2 == 1) {
            grados_finales = (grados - 32) / 1.8;
            cout << grados << "Grados Fahrenheit son equivalentes a" << grados_finales << "Grados Celsius";
        }
        if (tipo_2 == 2) {
            grados_finales = (grados - 32) * 5 / 9 + 273.15;
            cout << grados << "Grados Fahrenheit son equivalentes a" << grados_finales << "Grados Kelvin";
        }
        if (tipo_2 == 3) {
            grados_finales = grados + 459.67;
            cout << grados << "Grados Fahrenheit son equivalentes a" << grados_finales <<"Grados Rankine" ;
        }
        break;
    case 3: 
        cout << "Ingrese la escala de temperatura a la que desea pasar\n";
        cout << "1. Grados Celsius\n";
        cout << "2. Grados Fahrenheit\n";
        cout << "3. Grados Rankine\n";
        cin >> tipo_2;
        cout << "Ahora digite los datos a convertir:";
        cin >> grados;
        if (tipo_2 == 1) {
            grados_finales = grados - 273.15;
            cout << grados << "Grados Kelvin son equivalentes a" << grados_finales << "Grados Celsius" ;
        }
        if (tipo_2 == 2) {
            grados_finales = (grados - 273.15) * 9 / 5 + 32;
            cout << grados << "Grados Kelvin son equivalentes a" << grados_finales << "Grados Fahrenheit";
        }
        if (tipo_2 == 3) {
            grados_finales = grados * 1.8;
            cout << grados << "Grados Kelvin son equivalentes a" << grados_finales << "Grados Rankine" ;
        }
        break;
    case 4:
        cout << "Ingrese la escala de temperatura a la que desea pasar\n";
        cout << "1. Grados Celsius\n";
        cout << "2. Grados Fahrenheit\n";
        cout << "3. Grados Kelvin\n";
        cin >> tipo_2;
        cout << "Ahora digite los datos a convertir:";
        cin >> grados;
        if (tipo_2 == 1) {
            grados_finales = (grados - 491.67) * 5 / 9;
            cout << grados << "Grados Rankine son equivalentes a" << grados_finales <<"Grados Celsius";
        }
        if (tipo_2 == 2) {
            grados_finales = grados - 459.67;
            cout << grados << "Grados Rankine son equivalentes a"<< grados_finales << "Grados Fahrenheit";
        }
        if (tipo_2 == 3) {
            grados_finales = grados * 5 / 9;
            cout << grados << "Grados Rankine son equivalentes a" << grados_finales<< "Grados Kelvin";
        }
        break;
    default:
        cout << "INGRESE UNA OPCIÓN QUE SEA VALIDA";
        break;
    }
}