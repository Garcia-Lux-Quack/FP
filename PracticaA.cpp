// Proyecto3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
   

    // 1. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto: " << numeroCorto << endl;
    cout << "2. Rango short int : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() << endl;

    // 2. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "4. Rango entero sin signo : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max() << endl;

    // 3. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "5. Rango corto sin signo : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max() << endl;

    // 4. Entero largo sin signo (unsigned long long)
    unsigned long long numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "6. Rango largo sin signo : " << numeric_limits<unsigned long long>::min() << " a " << numeric_limits<unsigned long long>::max() << endl;

    // 5. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "7. Rango entero con signo : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max() << endl;

    // 6. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "8. Rango corto con signo : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed short int>::max() << endl;

    int edad;
    cout << "Ingresa tu edad : ";
    cin >> edad; // guardando un valor a edad
    cout << endl;  // salto de línea
    cout << "Tu edad es : " << edad << endl;

    const float pi = 3.141632;
    const double PI = 3.141632;
    cout << fixed; // punto fijo
    cout << setprecision(2);
    cout << "El valor de pi es " << pi << endl;

    // Preguntar por estatura
    float estatura;
    cout << "Dame tu estatura : ";
    cin >> estatura;
    cout << endl;
    cout << "Tu estatura es : "
        << estatura << endl;

    const float velocidadLuz = 300000;

    return 0;
}
