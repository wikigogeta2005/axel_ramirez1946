#include <iostream>
using namespace std;

int main() {
    int limiteinferior, limitesuperior, suma = 0, numeros = 0, fueraintervalo = 0;
    bool intervalosiguales = false; 
    cout << "Ingrese un numero para el limite inferior: ";
    cin >> limiteinferior;
    cout << "Ingrese un numero para el limite superior: ";
    cin >> limitesuperior;

    
    while (limiteinferior >= limitesuperior) {
        cout << "Error, el limite inferior no puede ser mayor o igual al limite superior." << endl;
        cout << "Ingrese nuevamente los valores correspondientes: " << endl;
        cout << "Ingrese un numero para el limite inferior: ";
        cin >> limiteinferior;
        cout << "Ingrese un numero para el limite superior: ";
        cin >> limitesuperior;
    }

    
    while (true) {
        cout << "Ingresa cualquier numero (0 para terminar): ";
        cin >> numeros;

        if (numeros == 0) 
            break;

        
        if (numeros > limiteinferior && numeros < limitesuperior) {
            suma += numeros;
        } else {
            fueraintervalo++; 
        }

        
        if (numeros == limiteinferior || numeros == limitesuperior) {
            intervalosiguales = true;
        }
    }
    cout << "\nResultados:" << endl;
    cout << "La suma de los números dentro del intervalo (" << limiteinferior << ", " << limitesuperior << ") es: " << suma << endl;
    cout << "Cantidad de números fuera del intervalo: " << fueraintervalo << endl;

    if (intervalosiguales) {
        cout << "Se introdujo un número igual a los límites del intervalo." << endl;
    } else {
        cout << "No se introdujeron números iguales a los límites del intervalo." << endl;
    }

    
}

