#include <iostream>
using namespace std;
int main ()
{
    int x;

    cout << "Ingrese el tamano del arreglo: ";
    cin >> x;

    int cuenta[x];
    int cuentaPares[x];
    int contadorPares = 0;

    for(int i = 0; i < x; i++) {
        cout << "Ingrese el numero en la posicion " << i+1 << ": ";
        cin >> cuenta[i];

        if(cuenta[i] % 2 == 0) {
            cuentaPares[contadorPares] = cuenta[i];
            contadorPares++;
        }
    }

    cout << "Los numeros pares son: ";
    for(int i = 0; i < contadorPares; i++) {
        cout << cuentaPares[i] << " ";
    }

    return 0;
}